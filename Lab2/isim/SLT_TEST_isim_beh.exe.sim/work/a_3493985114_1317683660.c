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


static void work_a_3493985114_1317683660_p_0(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4953);
    t7 = (t0 + 3176);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB5:    goto LAB2;

LAB4:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t2 = (t0 + 4720U);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 4736U);
    t10 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t6, t7, t2, t9, t8);
    t11 = (t0 + 1808U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    t13 = (t6 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    memcpy(t11, t10, t15);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t16 = (31 - 31);
    t14 = (t16 * -1);
    t15 = (1U * t14);
    t17 = (0 + t15);
    t2 = (t3 + t17);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4921);
    t7 = (t0 + 3176);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB8:    goto LAB5;

LAB7:    xsi_set_current_line(55, ng0);
    t7 = (t0 + 4889);
    t9 = (t0 + 3176);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB1:    return;
}


extern void work_a_3493985114_1317683660_init()
{
	static char *pe[] = {(void *)work_a_3493985114_1317683660_p_0};
	xsi_register_didat("work_a_3493985114_1317683660", "isim/SLT_TEST_isim_beh.exe.sim/work/a_3493985114_1317683660.didat");
	xsi_register_executes(pe);
}
