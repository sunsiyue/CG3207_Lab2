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
static const char *ng0 = "C:/Users/SIPL/Desktop/Lab2/Lab2/MULTU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3853796236_0781640033_p_0(char *t0)
{
    char t11[16];
    char t17[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1792U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3672);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1032U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(63, ng0);
    t2 = xsi_get_transient_memory(33U);
    memset(t2, 0, 33U);
    t4 = t2;
    memset(t4, (unsigned char)2, 33U);
    t5 = (t0 + 2368U);
    t8 = *((char **)t5);
    t13 = (2 * 32);
    t14 = (64 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t5 = (t8 + t16);
    memcpy(t5, t2, 33U);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t13 = (32 - 1);
    t14 = (64 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t5 + t16);
    memcpy(t2, t4, 32U);

LAB9:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t13 = (2 * 32);
    t20 = (t13 - 1);
    t14 = (64 - t20);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t5 = (t0 + 3752);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t13 = (32 - 1);
    t14 = (64 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t5 = (t0 + 3816);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2368U);
    t12 = *((char **)t4);
    t13 = (2 * 32);
    t14 = (64 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t4 = (t12 + t16);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 64;
    t19 = (t18 + 4U);
    *((int *)t19) = 32;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (32 - 64);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t0 + 1512U);
    t22 = *((char **)t19);
    t19 = (t0 + 5760U);
    t23 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t4, t17, t22, t19);
    t24 = (t0 + 2248U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    t26 = (t11 + 12U);
    t21 = *((unsigned int *)t26);
    t27 = (1U * t21);
    memcpy(t24, t23, t27);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t13 = (0 - 64);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t13 = (32 * 2);
    t14 = (64 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t8 = ((IEEE_P_2592010699) + 4024);
    t12 = (t17 + 0U);
    t18 = (t12 + 0U);
    *((int *)t18) = 64;
    t18 = (t12 + 4U);
    *((int *)t18) = 1;
    t18 = (t12 + 8U);
    *((int *)t18) = -1;
    t20 = (1 - 64);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t18 = (t12 + 12U);
    *((unsigned int *)t18) = t21;
    t5 = xsi_base_array_concat(t5, t11, t8, (char)99, (unsigned char)2, (char)97, t2, t17, (char)101);
    t18 = (t0 + 2368U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t21 = (1U + 64U);
    memcpy(t18, t5, t21);
    goto LAB9;

LAB11:    xsi_set_current_line(59, ng0);
    t5 = (t0 + 2248U);
    t8 = *((char **)t5);
    t5 = (t0 + 2368U);
    t12 = *((char **)t5);
    t20 = (32 * 2);
    t21 = (64 - t20);
    t27 = (t21 * 1U);
    t28 = (0 + t27);
    t5 = (t12 + t28);
    memcpy(t5, t8, 33U);
    goto LAB12;

}


extern void work_a_3853796236_0781640033_init()
{
	static char *pe[] = {(void *)work_a_3853796236_0781640033_p_0};
	xsi_register_didat("work_a_3853796236_0781640033", "isim/ALU_TEST_isim_beh.exe.sim/work/a_3853796236_0781640033.didat");
	xsi_register_executes(pe);
}
