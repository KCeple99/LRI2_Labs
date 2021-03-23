----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:21:37 03/23/2021 
-- Design Name: 
-- Module Name:    echo_device - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity echo_device is
	Port ( 
		clk, rst: in STD_LOGIC;
		r_done : in  STD_LOGIC;
		w_start : out  STD_LOGIC;
		w_done : in  STD_LOGIC
		);
end echo_device;

architecture echo_device_arch of echo_device is
	type State is (
		Waiting, Echoing
	);
	
	signal currState : State := Waiting;
	signal nextState : State;
begin

	-- FSM Synchronous part - register
	process(clk) is
	begin
		if rising_edge(clk) then
			if to_x01(rst) = '1' then
				currState <= Waiting;
			else
				currState <= nextState;
			end if;
		end if;
	end process;
	
	-- FSM Asynchronous part - next state decoder and output decoder
	process(r_done, w_done, currState) is
	begin
		w_start <= '0';
		
		case currState is
			when Waiting =>
				if rising_edge(r_done) then
					w_start <= '1';
					nextState <= Echoing;
				end if;
			when Echoing =>
				if rising_edge(w_done) then
					nextState <= Waiting;
				end if;
			when others => null;
		end case;
	end process;

end echo_device_arch;

