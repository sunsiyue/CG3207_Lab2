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
static const char *ng0 = "C:/Users/SIPL/Desktop/Lab2/Lab2/SLT.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3850577328_1317683660_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;

LAB0:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5188U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 5204U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t0 + 1928U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t1 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    memcpy(t7, t6, t11);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t12 = (31 - 31);
    t10 = (t12 * -1);
    t11 = (1U * t10);
    t13 = (0 + t11);
    t2 = (t3 + t13);
    t14 = *((unsigned char *)t2);
    t15 = (t14 == (unsigned char)3);
    if (t15 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5437);
    t4 = (t0 + 2048U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    memcpy(t4, t2, 32U);

LAB3:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3432);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 32U);
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3352);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 5405);
    t6 = (t0 + 2048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t4, 32U);
    goto LAB3;

}


extern void work_a_3850577328_1317683660_init()
{
	static char *pe[] = {(void *)work_a_3850577328_1317683660_p_0};
	xsi_register_didat("work_a_3850577328_1317683660", "isim/ALU_TEST_isim_beh.exe.sim/work/a_3850577328_1317683660.didat");
	xsi_register_executes(pe);
}
