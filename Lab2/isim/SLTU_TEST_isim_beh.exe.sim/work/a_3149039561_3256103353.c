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
static const char *ng0 = "C:/CG3207/Lab2/SLTU.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);


static void work_a_3149039561_3256103353_p_0(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t2 = (t0 + 3352);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 32U);
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3272);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
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
    t11 = *((char **)t4);
    t4 = (t0 + 4936U);
    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t12 = (t0 + 4952U);
    t14 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t11, t4, t13, t12);
    if (t14 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5138);
    t5 = (t0 + 1968U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t2, 32U);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(57, ng0);
    t15 = (t0 + 5106);
    t17 = (t0 + 1968U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t15, 32U);
    goto LAB12;

}


extern void work_a_3149039561_3256103353_init()
{
	static char *pe[] = {(void *)work_a_3149039561_3256103353_p_0};
	xsi_register_didat("work_a_3149039561_3256103353", "isim/SLTU_TEST_isim_beh.exe.sim/work/a_3149039561_3256103353.didat");
	xsi_register_executes(pe);
}
