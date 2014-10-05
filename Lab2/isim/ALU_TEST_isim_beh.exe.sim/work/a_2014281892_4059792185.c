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
static const char *ng0 = "C:/Users/SIPL/Desktop/Lab2/Lab2/SL_LOGI.vhd";
extern char *IEEE_P_2592010699;



static void work_a_2014281892_4059792185_p_0(char *t0)
{
    char t22[16];
    char t24[16];
    char t29[16];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    char *t30;
    int t31;
    char *t32;

LAB0:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1632U);
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
LAB2:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3752);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB12:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t2 = (t0 + 3816);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t4, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1192U);
    t11 = *((char **)t4);
    t12 = (31 - 4);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t4 = (t11 + t14);
    t15 = (t0 + 2248U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    memcpy(t15, t4, 5U);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 32U);
    goto LAB9;

LAB11:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2248U);
    t5 = *((char **)t2);
    t17 = (0 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (1 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (2 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (3 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (4 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB26;

LAB28:
LAB27:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3752);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(62, ng0);
    t8 = (t0 + 2368U);
    t11 = *((char **)t8);
    t18 = (31 - 30);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t8 = (t11 + t20);
    t15 = (t0 + 5940);
    t23 = ((IEEE_P_2592010699) + 4024);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 30;
    t26 = (t25 + 4U);
    *((int *)t26) = 0;
    t26 = (t25 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - 30);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t26 = (t29 + 0U);
    t30 = (t26 + 0U);
    *((int *)t30) = 0;
    t30 = (t26 + 4U);
    *((int *)t30) = 0;
    t30 = (t26 + 8U);
    *((int *)t30) = 1;
    t31 = (0 - 0);
    t28 = (t31 * 1);
    t28 = (t28 + 1);
    t30 = (t26 + 12U);
    *((unsigned int *)t30) = t28;
    t21 = xsi_base_array_concat(t21, t22, t23, (char)97, t8, t24, (char)97, t15, t29, (char)101);
    t30 = (t0 + 2368U);
    t32 = *((char **)t30);
    t30 = (t32 + 0);
    t28 = (31U + 1U);
    memcpy(t30, t21, t28);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (0 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB15;

LAB17:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 2368U);
    t8 = *((char **)t5);
    t18 = (31 - 29);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t5 = (t8 + t20);
    t11 = (t0 + 5941);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 29;
    t25 = (t23 + 4U);
    *((int *)t25) = 0;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (0 - 29);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t25 = (t29 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 0;
    t26 = (t25 + 4U);
    *((int *)t26) = 1;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t31 = (1 - 0);
    t28 = (t31 * 1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t16 = xsi_base_array_concat(t16, t22, t21, (char)97, t5, t24, (char)97, t11, t29, (char)101);
    t26 = (t0 + 2368U);
    t30 = *((char **)t26);
    t26 = (t30 + 0);
    t28 = (30U + 2U);
    memcpy(t26, t16, t28);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (1 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB18;

LAB20:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 2368U);
    t8 = *((char **)t5);
    t18 = (31 - 27);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t5 = (t8 + t20);
    t11 = (t0 + 5943);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 27;
    t25 = (t23 + 4U);
    *((int *)t25) = 0;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (0 - 27);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t25 = (t29 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 0;
    t26 = (t25 + 4U);
    *((int *)t26) = 3;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t31 = (3 - 0);
    t28 = (t31 * 1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t16 = xsi_base_array_concat(t16, t22, t21, (char)97, t5, t24, (char)97, t11, t29, (char)101);
    t26 = (t0 + 2368U);
    t30 = *((char **)t26);
    t26 = (t30 + 0);
    t28 = (28U + 4U);
    memcpy(t26, t16, t28);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (2 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB21;

LAB23:    xsi_set_current_line(77, ng0);
    t5 = (t0 + 2368U);
    t8 = *((char **)t5);
    t18 = (31 - 23);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t5 = (t8 + t20);
    t11 = (t0 + 5947);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 23;
    t25 = (t23 + 4U);
    *((int *)t25) = 0;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (0 - 23);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t25 = (t29 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 0;
    t26 = (t25 + 4U);
    *((int *)t26) = 7;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t31 = (7 - 0);
    t28 = (t31 * 1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t16 = xsi_base_array_concat(t16, t22, t21, (char)97, t5, t24, (char)97, t11, t29, (char)101);
    t26 = (t0 + 2368U);
    t30 = *((char **)t26);
    t26 = (t30 + 0);
    t28 = (24U + 8U);
    memcpy(t26, t16, t28);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (3 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB24;

LAB26:    xsi_set_current_line(82, ng0);
    t5 = (t0 + 2368U);
    t8 = *((char **)t5);
    t18 = (31 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t5 = (t8 + t20);
    t11 = (t0 + 5955);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 15;
    t25 = (t23 + 4U);
    *((int *)t25) = 0;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (0 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t25 = (t29 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 0;
    t26 = (t25 + 4U);
    *((int *)t26) = 15;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t31 = (15 - 0);
    t28 = (t31 * 1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t16 = xsi_base_array_concat(t16, t22, t21, (char)97, t5, t24, (char)97, t11, t29, (char)101);
    t26 = (t0 + 2368U);
    t30 = *((char **)t26);
    t26 = (t30 + 0);
    t28 = (16U + 16U);
    memcpy(t26, t16, t28);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t17 = (4 - 4);
    t12 = (t17 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t4 + t14);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB27;

}


extern void work_a_2014281892_4059792185_init()
{
	static char *pe[] = {(void *)work_a_2014281892_4059792185_p_0};
	xsi_register_didat("work_a_2014281892_4059792185", "isim/ALU_TEST_isim_beh.exe.sim/work/a_2014281892_4059792185.didat");
	xsi_register_executes(pe);
}
