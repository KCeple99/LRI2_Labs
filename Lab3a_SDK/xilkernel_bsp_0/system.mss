
 PARAMETER VERSION = 2.2.0


BEGIN OS
 PARAMETER OS_NAME = xilkernel
 PARAMETER OS_VER = 5.01.a
 PARAMETER PROC_INSTANCE = microblaze_0
 PARAMETER STDIN = axi_uartlite_0
 PARAMETER STDOUT = axi_uartlite_0
 PARAMETER SYSTMR_SPEC = true
 PARAMETER SYSTMR_DEV = axi_timer_1
 PARAMETER SYSINTC_SPEC = axi_intc_0
 PARAMETER SYSTMR_INTERVAL = 100
 PARAMETER CONFIG_PTHREAD_MUTEX = true
 PARAMETER SCHED_TYPE = SCHED_PRIO
 PARAMETER N_PRIO = 8
 PARAMETER CONFIG_TIME = true
 PARAMETER CONFIG_SEMA = true
 PARAMETER MAX_SEM = 4
 PARAMETER CONFIG_MSGQ = true
 PARAMETER NUM_MSGQS = 1
 PARAMETER CONFIG_BUFMALLOC = true
 PARAMETER CONFIG_DEBUG_SUPPORT = true
 PARAMETER DEBUG_MON = true
 PARAMETER ENHANCED_FEATURES = true
 PARAMETER CONFIG_KILL = true
 PARAMETER MAX_PTHREADS = 20
 PARAMETER MAX_PTHREAD_MUTEX = 20
 PARAMETER MAX_PTHREAD_MUTEX_WAITQ = 20
 PARAMETER STATIC_PTHREAD_TABLE = ((shell_main,1))
 PARAMETER MEM_TABLE = ((4,30),(8,20))
END


BEGIN PROCESSOR
 PARAMETER DRIVER_NAME = cpu
 PARAMETER DRIVER_VER = 1.15.a
 PARAMETER HW_INSTANCE = microblaze_0
END


BEGIN DRIVER
 PARAMETER DRIVER_NAME = intc
 PARAMETER DRIVER_VER = 2.06.a
 PARAMETER HW_INSTANCE = axi_intc_0
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = s6_ddrx
 PARAMETER DRIVER_VER = 1.00.a
 PARAMETER HW_INSTANCE = axi_s6_ddrx_0
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = tmrctr
 PARAMETER DRIVER_VER = 2.05.a
 PARAMETER HW_INSTANCE = axi_timer_0
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = tmrctr
 PARAMETER DRIVER_VER = 2.05.a
 PARAMETER HW_INSTANCE = axi_timer_1
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = uartlite
 PARAMETER DRIVER_VER = 2.01.a
 PARAMETER HW_INSTANCE = axi_uartlite_0
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = uartlite
 PARAMETER DRIVER_VER = 2.01.a
 PARAMETER HW_INSTANCE = debug_module
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = gpio
 PARAMETER DRIVER_VER = 3.01.a
 PARAMETER HW_INSTANCE = dip_gpio
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = gpio
 PARAMETER DRIVER_VER = 3.01.a
 PARAMETER HW_INSTANCE = led_gpio
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = bram
 PARAMETER DRIVER_VER = 3.03.a
 PARAMETER HW_INSTANCE = microblaze_0_d_bram_ctrl
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = bram
 PARAMETER DRIVER_VER = 3.03.a
 PARAMETER HW_INSTANCE = microblaze_0_i_bram_ctrl
END

BEGIN DRIVER
 PARAMETER DRIVER_NAME = gpio
 PARAMETER DRIVER_VER = 3.01.a
 PARAMETER HW_INSTANCE = push_gpio
END


