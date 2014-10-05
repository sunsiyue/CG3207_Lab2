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
static const char *ng0 = "C:/Users/SIPL/Desktop/Lab2/Lab2/BOOTH_MUL.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1240227845_1049765477_p_0(char *t0)
{
    char t21[16];
    char t34[16];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    int t35;
    unsigned int t36;

LAB0:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1792U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3912);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1032U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2248U);
    t5 = *((char **)t2);
    t17 = (32 * 2);
    t12 = (64 - t17);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    memcpy(t2, t4, 32U);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 6164U);
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t34, t4, t2);
    t8 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t21, t5, t34, (unsigned char)3);
    t11 = (t0 + 2368U);
    t15 = *((char **)t11);
    t17 = (32 * 2);
    t12 = (64 - t17);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t11 = (t15 + t14);
    t16 = (t21 + 12U);
    t30 = *((unsigned int *)t16);
    t31 = (1U * t30);
    memcpy(t11, t8, t31);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    t12 = (64 - 32);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    memcpy(t2, t4, 32U);
    xsi_set_current_line(67, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    memset(t4, (unsigned char)2, 32U);
    t5 = (t0 + 2488U);
    t8 = *((char **)t5);
    t17 = (32 * 2);
    t12 = (64 - t17);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t5 = (t8 + t14);
    memcpy(t5, t2, 32U);
    xsi_set_current_line(68, ng0);
    t2 = xsi_get_transient_memory(65U);
    memset(t2, 0, 65U);
    t4 = t2;
    memset(t4, (unsigned char)2, 65U);
    t5 = (t0 + 2608U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t2, 65U);

LAB9:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t17 = (32 * 2);
    t12 = (64 - t17);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t5 = (t0 + 3992);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t12 = (64 - 32);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t5 = (t0 + 4056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2488U);
    t11 = *((char **)t4);
    t12 = (64 - 1);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t4 = (t11 + t14);
    t15 = (t0 + 6566);
    t17 = xsi_mem_cmp(t15, t4, 2U);
    if (t17 == 1)
        goto LAB12;

LAB15:    t18 = (t0 + 6568);
    t20 = xsi_mem_cmp(t18, t4, 2U);
    if (t20 == 1)
        goto LAB13;

LAB16:
LAB14:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 2608U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 65U);

LAB11:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t17 = (32 * 2);
    t20 = (t17 - 64);
    t12 = (t20 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2608U);
    t8 = *((char **)t5);
    t32 = (32 * 2);
    t30 = (64 - t32);
    t31 = (t30 * 1U);
    t33 = (0 + t31);
    t5 = (t8 + t33);
    t15 = ((IEEE_P_2592010699) + 4024);
    t16 = (t34 + 0U);
    t18 = (t16 + 0U);
    *((int *)t18) = 64;
    t18 = (t16 + 4U);
    *((int *)t18) = 1;
    t18 = (t16 + 8U);
    *((int *)t18) = -1;
    t35 = (1 - 64);
    t36 = (t35 * -1);
    t36 = (t36 + 1);
    t18 = (t16 + 12U);
    *((unsigned int *)t18) = t36;
    t11 = xsi_base_array_concat(t11, t21, t15, (char)99, t1, (char)97, t5, t34, (char)101);
    t18 = (t0 + 2488U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t36 = (1U + 64U);
    memcpy(t18, t11, t36);
    goto LAB9;

LAB12:    xsi_set_current_line(56, ng0);
    t22 = (t0 + 2488U);
    t23 = *((char **)t22);
    t22 = (t0 + 6196U);
    t24 = (t0 + 2248U);
    t25 = *((char **)t24);
    t24 = (t0 + 6196U);
    t26 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t23, t22, t25, t24);
    t27 = (t0 + 2608U);
    t28 = *((char **)t27);
    t27 = (t28 + 0);
    t29 = (t21 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    memcpy(t27, t26, t31);
    goto LAB11;

LAB13:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 6196U);
    t5 = (t0 + 2368U);
    t8 = *((char **)t5);
    t5 = (t0 + 6196U);
    t11 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t4, t2, t8, t5);
    t15 = (t0 + 2608U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t18 = (t21 + 12U);
    t12 = *((unsigned int *)t18);
    t13 = (1U * t12);
    memcpy(t15, t11, t13);
    goto LAB11;

LAB17:;
}


extern void work_a_1240227845_1049765477_init()
{
	static char *pe[] = {(void *)work_a_1240227845_1049765477_p_0};
	xsi_register_didat("work_a_1240227845_1049765477", "isim/ALU_TEST_isim_beh.exe.sim/work/a_1240227845_1049765477.didat");
	xsi_register_executes(pe);
}
