/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/FaksHub/2020_2021/2.Semester_2020_2021/LRI2/Labs/Lab1/Lab1/UART_receiver.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1388759734_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4288519174_2783977553_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t12;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 2592U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 7376);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 7584);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 7584);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t10 = *((int *)t6);
    t11 = (t10 + 1);
    t2 = (t0 + 7584);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    *((int *)t12) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_4288519174_2783977553_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;

LAB0:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2912U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 7392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 7648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB5:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 7648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB7:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t8 = *((int *)t4);
    t9 = (t8 + 1);
    t3 = (t0 + 7648);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = t9;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void work_a_4288519174_2783977553_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 >= 8);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 7712);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 7408);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7712);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4288519174_2783977553_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 >= 8);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 7776);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 7424);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7776);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4288519174_2783977553_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 >= 16);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 7840);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 7440);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4288519174_2783977553_p_5(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7456);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7904);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(114, ng0);
    t3 = (t0 + 7904);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_4288519174_2783977553_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB7, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 7968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 8032);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 8096);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 8160);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 8224);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 7472);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t7 = *((unsigned char *)t4);
    t8 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t6);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB2;

LAB5:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t6);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t6);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB17;

LAB18:
LAB15:    goto LAB2;

LAB6:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t6);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB2;

LAB7:    xsi_set_current_line(174, ng0);
    goto LAB2;

LAB8:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 8288);
    t5 = (t3 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 8224);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 8288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 8224);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 8160);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 8288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 8224);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t9 = *((unsigned char *)t3);
    t1 = (t0 + 8352);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t9;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 8032);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 8096);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 8224);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB19:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 8288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 7968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB20;

}

static void work_a_4288519174_2783977553_p_7(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;

LAB0:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3712U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7488);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(183, ng0);
    t3 = xsi_get_transient_memory(8U);
    memset(t3, 0, 8U);
    t4 = t3;
    memset(t4, (unsigned char)2, 8U);
    t5 = (t0 + 8416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(186, ng0);
    t3 = (t0 + 3912U);
    t4 = *((char **)t3);
    t10 = (7 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t3 = (t4 + t12);
    t5 = (t0 + 8416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 7U);
    xsi_driver_first_trans_delta(t5, 1U, 7U, 0LL);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8416);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB3;

}

static void work_a_4288519174_2783977553_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(192, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 8480);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7504);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4288519174_2783977553_init()
{
	static char *pe[] = {(void *)work_a_4288519174_2783977553_p_0,(void *)work_a_4288519174_2783977553_p_1,(void *)work_a_4288519174_2783977553_p_2,(void *)work_a_4288519174_2783977553_p_3,(void *)work_a_4288519174_2783977553_p_4,(void *)work_a_4288519174_2783977553_p_5,(void *)work_a_4288519174_2783977553_p_6,(void *)work_a_4288519174_2783977553_p_7,(void *)work_a_4288519174_2783977553_p_8};
	xsi_register_didat("work_a_4288519174_2783977553", "isim/UART_receiver_isim_beh.exe.sim/work/a_4288519174_2783977553.didat");
	xsi_register_executes(pe);
}
