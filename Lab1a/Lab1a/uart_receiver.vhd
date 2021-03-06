----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:47:53 03/20/2021 
-- Design Name: 
-- Module Name:    UART_receiver - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity UART_receiver is
	port (
		clk, rst:  in std_logic;
		rx, tick: in std_logic;
		d_out: out std_logic_vector(7 downto 0);
		rx_done : out std_logic
	);
end UART_receiver;

architecture UART_receiver_arch of UART_receiver is
	type State is (
		Idle, State1, State3, State4
	);
	signal currentState, nextState : State;
	
	signal c_brg : integer;
	signal c_s3_debug : integer;
	signal cr_brg : std_logic := '0';
	signal shift_reg : std_logic_vector(7 downto 0);
	
	signal reg_rst : std_logic;
	signal reg_rx : std_logic;
	signal reg_rx_done : std_logic;
begin

	-- ################################################################################################################################################
	-- #################################################				I/O REGISTERS 			###############################################################
	-- ################################################################################################################################################

	-- rst Register
	process(clk) is
	begin
		if rising_edge(clk) then
			reg_rst <= rst;
		end if;
	end process;
	
	-- RX Register
	process(clk) is
	begin
		if rising_edge(clk) then
			if to_x01(reg_rst) = '0' then
				reg_rx <= '1';
			else
				reg_rx <= rx;
			end if;
		end if;
	end process;
	
	-- RX_Done Register
	process(clk) is
	begin
		if rising_edge(clk) then
			if to_x01(reg_rst) = '0' then
				rx_done <= '0';
			else
				rx_done <= reg_rx_done;
			end if;
		end if;
	end process;
		
	-- ################################################################################################################################################
	-- #################################################				FSM					##################################################################
	-- ################################################################################################################################################
	
	-- FSM Baud Rate Tick Counter
	process(clk) is
		variable ticked : boolean;
	begin
		if falling_edge(clk) then
			if to_x01(reg_rst) = '0' or to_x01(cr_brg) = '1' then
				c_brg <= 0;				
				ticked := False;
			elsif to_x01(tick) = '1' and not ticked then
				c_brg <= c_brg + 1;
				ticked := true;
			elsif to_x01(tick) = '0' then
				ticked := false;
			else
				null;
			end if;
		end if;
	end process;
	
	-- FSM
	process(reg_rst, clk) is
		variable c_s3 : integer := 0;
	begin
		if to_x01(reg_rst) = '0' then
			currentState <= Idle;
			nextState <= Idle;
			shift_reg <= (others => '0');
		elsif rising_edge(clk) then
			reg_rx_done <= '0';
			cr_brg <= '0';
			
			case currentState is
				when Idle =>
					cr_brg <= '1';
				
					if to_x01(reg_rx) = '0' then
						nextState <= State1;
						cr_brg <= '1';
					end if;
				when State1 =>
					-- Need to wait until tick counter reaches 7!
					if c_brg > 8 then
						nextState <= State3;
						cr_brg <= '1';		-- Reset tick counter once again
						c_s3 := 0;			-- Reset s3 cycles counter
					end if;
				when State3 =>
					if c_s3 = 8 then
						-- Last bit sampled - go and sample the stop bit!
						nextState <= State4;
						cr_brg <= '1';
					elsif c_brg > 16 then
						-- 15 ticks reached means we're in the middle of the bit - sample and increase the counter!
						
						shift_reg(6 downto 0) <= shift_reg(7 downto 1);
						shift_reg(7) <= reg_rx;
						
						c_s3 := c_s3 + 1;
						cr_brg <= '1';
					end if;
				when State4 =>
					-- Wait 15 more ticks
					if c_brg >= 16 then
						reg_rx_done <= '1';
						nextState <= Idle;
					end if;
				when others => null;
			end case;
			
			currentState <= nextState;
		end if;
	end process;

	d_out <= shift_reg;
end UART_receiver_arch;