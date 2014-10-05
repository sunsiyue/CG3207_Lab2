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
static const char *ng0 = "C:/Users/SIPL/Desktop/Lab2/Lab2/DIVU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0263960651_3586785612_p_0(char *t0)
{
    char t11[16];
    char t19[16];
    char t21[16];
    char t27[16];
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
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;

LAB0:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1152U);
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
LAB2:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1032U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 2248U);
    t5 = *((char **)t2);
    t13 = (32 - 1);
    t15 = (64 - t13);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t5 + t17);
    memcpy(t2, t4, 32U);
    xsi_set_current_line(67, ng0);
    t2 = xsi_get_transient_memory(33U);
    memset(t2, 0, 33U);
    t4 = t2;
    memset(t4, (unsigned char)2, 33U);
    t5 = (t0 + 2248U);
    t8 = *((char **)t5);
    t13 = (32 * 2);
    t15 = (64 - t13);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t5 = (t8 + t17);
    memcpy(t5, t2, 33U);

LAB9:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t13 = (32 - 1);
    t15 = (64 - t13);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 3752);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t18 = (t12 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t13 = (32 * 2);
    t15 = (64 - t13);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 3816);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t18 = (t12 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2248U);
    t12 = *((char **)t4);
    t13 = (32 * 2);
    t14 = (t13 - 1);
    t15 = (64 - t14);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t4 = (t12 + t17);
    t20 = ((IEEE_P_2592010699) + 4024);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 63;
    t23 = (t22 + 4U);
    *((int *)t23) = 32;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t24 = (32 - 63);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)99, (unsigned char)2, (char)97, t4, t21, (char)101);
    t23 = (t0 + 1512U);
    t26 = *((char **)t23);
    t28 = ((IEEE_P_2592010699) + 4024);
    t29 = (t0 + 5744U);
    t23 = xsi_base_array_concat(t23, t27, t28, (char)99, (unsigned char)2, (char)97, t26, t29, (char)101);
    t30 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t18, t19, t23, t27);
    t31 = (t0 + 2368U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    t33 = (t11 + 12U);
    t25 = *((unsigned int *)t33);
    t34 = (1U * t25);
    memcpy(t31, t30, t34);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t13 = (32 - 32);
    t15 = (t13 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t13 = (32 - 1);
    t15 = (32 - t13);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 2248U);
    t8 = *((char **)t5);
    t14 = (32 * 2);
    t24 = (t14 - 1);
    t25 = (64 - t24);
    t34 = (t25 * 1U);
    t35 = (0 + t34);
    t5 = (t8 + t35);
    memcpy(t5, t2, 32U);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t13 = (32 * 2);
    t14 = (t13 - 1);
    t15 = (64 - t14);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t8 = ((IEEE_P_2592010699) + 4024);
    t12 = (t19 + 0U);
    t18 = (t12 + 0U);
    *((int *)t18) = 63;
    t18 = (t12 + 4U);
    *((int *)t18) = 0;
    t18 = (t12 + 8U);
    *((int *)t18) = -1;
    t24 = (0 - 63);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t18 = (t12 + 12U);
    *((unsigned int *)t18) = t25;
    t5 = xsi_base_array_concat(t5, t11, t8, (char)97, t2, t19, (char)99, (unsigned char)3, (char)101);
    t18 = (t0 + 2248U);
    t20 = *((char **)t18);
    t18 = (t20 + 0);
    t25 = (64U + 1U);
    memcpy(t18, t5, t25);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 2248U);
    t8 = *((char **)t5);
    t14 = (32 * 2);
    t24 = (t14 - 1);
    t25 = (64 - t24);
    t34 = (t25 * 1U);
    t35 = (0 + t34);
    t5 = (t8 + t35);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = 63;
    t22 = (t20 + 4U);
    *((int *)t22) = 0;
    t22 = (t20 + 8U);
    *((int *)t22) = -1;
    t36 = (0 - 63);
    t37 = (t36 * -1);
    t37 = (t37 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t37;
    t12 = xsi_base_array_concat(t12, t11, t18, (char)97, t5, t19, (char)99, (unsigned char)2, (char)101);
    t22 = (t0 + 2248U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    t37 = (64U + 1U);
    memcpy(t22, t12, t37);
    goto LAB12;

}


extern void work_a_0263960651_3586785612_init()
{
	static char *pe[] = {(void *)work_a_0263960651_3586785612_p_0};
	xsi_register_didat("work_a_0263960651_3586785612", "isim/ALU_TEST_isim_beh.exe.sim/work/a_0263960651_3586785612.didat");
	xsi_register_executes(pe);
}
