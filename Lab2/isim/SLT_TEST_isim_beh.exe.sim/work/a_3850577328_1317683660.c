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
static const char *ng0 = "C:/CG3207/Lab2/SLT.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3850577328_1317683660_p_0(char *t0)
{
    char t11[16];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2208U);
    t4 = *((char **)t2);
    t2 = (t0 + 3592);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 32U);
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3512);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1032U);
    t12 = *((char **)t4);
    t4 = (t0 + 5224U);
    t13 = (t0 + 1192U);
    t14 = *((char **)t13);
    t13 = (t0 + 5240U);
    t15 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t12, t4, t14, t13);
    t16 = (t0 + 2088U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t18 = (t11 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    memcpy(t16, t15, t20);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2088U);
    t4 = *((char **)t2);
    t21 = (31 - 31);
    t19 = (t21 * -1);
    t20 = (1U * t19);
    t22 = (0 + t20);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5474);
    t5 = (t0 + 2208U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t2, 32U);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 5442);
    t12 = (t0 + 2208U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    memcpy(t12, t5, 32U);
    goto LAB12;

}


extern void work_a_3850577328_1317683660_init()
{
	static char *pe[] = {(void *)work_a_3850577328_1317683660_p_0};
	xsi_register_didat("work_a_3850577328_1317683660", "isim/SLT_TEST_isim_beh.exe.sim/work/a_3850577328_1317683660.didat");
	xsi_register_executes(pe);
}
