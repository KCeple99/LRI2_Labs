/*
 * main.c
 *
 *  Created on: May 18, 2021
 *      Author: Kristijan Ceple
 */

/*
 * appa.c - Contains Appendix A Code Demo
 *
 *  Created on: May 18, 2021
 *      Author: Kristijan Ceple
 */
#include "xmk.h"
#include "sys/init.h"
#include "xgpio.h"
#include "pthread.h"
#include "xuartlite.h"
#include "xparameters.h"
#include <sys/timer.h> //for using sleep. need to set config_time to true
#include <sys/intr.h> //xilkernel api for interrupts
#include <stdio.h>
#define XST_SUCCESS 0L
#define XST_FAILURE 1L

pthread_t tid1, tid2;
XGpio gpDIP, gpPUSH, gpLED; //PB device instance.
static void gpDIPIntHandler(void *arg) //Should be very short (in time). In a practical program, don't print etc.
{
	unsigned char val;
//clear the interrupt flag. if this is not done, gpio will keep interrupting the microblaze.--
	XGpio_InterruptClear(&gpDIP, 1);
	val = XGpio_DiscreteRead(&gpDIP, 1);
	xil_printf("Gpio Interrupt Test PASSED %d. \r\n", val);
	XGpio_DiscreteWrite(&gpLED, 1, val);
}

static void gpPUSHIntHandler(void *arg) //Should be very short (in time). In a practical program, don't print etc.
{
	unsigned char val;
//clear the interrupt flag. if this is not done, gpio will keep interrupting the microblaze.--
	XGpio_InterruptClear(&gpPUSH, 1);
	val = XGpio_DiscreteRead(&gpPUSH, 1);
	xil_printf("Gpio Interrupt Test PASSED %d. \r\n", val);
	XGpio_DiscreteWrite(&gpLED, 1, val);
}

void* thread_tut_func_1() {
	int i;
	while (1) {
		xil_printf("crta---------------------------------------\r\n");
		for (i = 0; i < 10000; i++);
		sys_sleep(4000);
	}
}

void* thread_tut_func_2() {
	int i;
	while (1) {
		xil_printf("tocka........\r\n");
		for (i = 0; i < 1000; i++);
		sys_sleep(1000);
	}
}

void shell_main(void* arg) {
	int Status;
	int ret;
	// Initialise LED
	Status = XGpio_Initialize(&gpLED, XPAR_LED_GPIO_DEVICE_ID);
	XGpio_SetDataDirection(&gpLED, 1, 0x00000000);
	XGpio_DiscreteWrite(&gpLED, 1, 0x00);
	print("Initializing DIP\r\n");
	// Initialise the DIP instance & PUSH
	Status = XGpio_Initialize(&gpDIP, XPAR_DIP_GPIO_DEVICE_ID);
	Status = XGpio_Initialize(&gpPUSH, XPAR_PUSH_GPIO_DEVICE_ID);
	// set DP & PUSH gpio direction to input.
	XGpio_SetDataDirection(&gpDIP, 1, 0x000000FF);
	XGpio_SetDataDirection(&gpPUSH, 1, 0x000000FF);
	print("Enabling DIP interrupts\r\n");
	//global enable
	XGpio_InterruptGlobalEnable(&gpDIP);
	// interrupt enable. both global enable and this function should be called to enable gpio interrupts.
	XGpio_InterruptEnable(&gpDIP, 1);
	//register the handler with xilkernel
	register_int_handler(XPAR_AXI_INTC_0_DIP_GPIO_IP2INTC_IRPT_INTR,
			gpDIPIntHandler, &gpDIP);
	//enable the interrupt in xilkernel
	enable_interrupt(XPAR_AXI_INTC_0_DIP_GPIO_IP2INTC_IRPT_INTR);
	print("DIP int enabled\r\n");
	print("Enabling PUSH interrupts\r\n");
	//global enable
	XGpio_InterruptGlobalEnable(&gpPUSH);

	// interrupt enable. both global enable and this function should be called to enable gpio interrupts.
	XGpio_InterruptEnable(&gpPUSH, 1);
	//register the handler with xilkernel
	register_int_handler(XPAR_AXI_INTC_0_PUSH_GPIO_IP2INTC_IRPT_INTR,
			gpPUSHIntHandler, &gpPUSH);
	//enable the interrupt in xilkernel
	enable_interrupt(XPAR_AXI_INTC_0_PUSH_GPIO_IP2INTC_IRPT_INTR);
	print("PUSH int enabled\r\n");
	//start thread 1
	ret = pthread_create(&tid1, NULL, (void*) thread_tut_func_1, NULL );
	if (ret != 0) {
		xil_printf("-- ERROR (%d) launching thread_tut_func_1...\r\n", ret);
	} else {
		xil_printf("Thread 1 launched with ID %d \r\n", tid1);
	}
	//start thread 2
	ret = pthread_create(&tid2, NULL, (void*) thread_tut_func_2, NULL );
	if (ret != 0) {
		xil_printf("-- ERROR (%d) launching thread_tut_func_2...\r\n", ret);
	} else {
		xil_printf("Thread 2 launched with ID %d \r\n", tid2);
	}
}

int main ()
{
	xil_printf("Main started!");
    xilkernel_main ();
}

//int main_example() {
//	print("-- Entering main() --\r\n");
////Initialize Xilkernel
//	xilkernel_init();
////Add main_prog as the static thread that will be invoked by Xilkernel
//	xmk_add_static_thread(main_prog, 0);
////Start Xilkernel
//	xilkernel_start();
//	/* Never reached */
//	return 0;
//}
