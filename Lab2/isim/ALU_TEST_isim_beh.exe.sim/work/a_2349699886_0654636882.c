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
static const char *ng0 = "C:/Users/SIPL/Desktop/Lab2/Lab2/DIV.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2349699886_0654636882_p_0(char *t0)
{
    char t11[16];
    char t18[16];
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
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;

LAB0:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4152);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1032U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t13 = (32 - 1);
    t14 = (t13 - 31);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 1512U);
    t8 = *((char **)t5);
    t21 = (32 - 1);
    t27 = (t21 - 31);
    t22 = (t27 * -1);
    t29 = (1U * t22);
    t30 = (0 + t29);
    t5 = (t8 + t30);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t1, t3);
    t12 = (t0 + 2608U);
    t19 = *((char **)t12);
    t12 = (t19 + 0);
    *((unsigned char *)t12) = t6;
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t13 = (32 - 1);
    t14 = (t13 - 31);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 2728U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 32U);

LAB18:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = (32 - 1);
    t14 = (t13 - 31);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2848U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 32U);

LAB21:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2848U);
    t4 = *((char **)t2);
    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 32U);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t2 = (t0 + 2248U);
    t5 = *((char **)t2);
    t15 = (64 - 32);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t5 + t17);
    memcpy(t2, t4, 32U);
    xsi_set_current_line(86, ng0);
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
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 65U);

LAB9:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t13 = (32 - 1);
    t15 = (64 - t13);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4232);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t13 = (32 * 2);
    t15 = (64 - t13);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t5 = (t0 + 4296);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2248U);
    t12 = *((char **)t4);
    t13 = (32 * 2);
    t14 = (t13 - 1);
    t15 = (64 - t14);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t4 = (t12 + t17);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 63;
    t20 = (t19 + 4U);
    *((int *)t20) = 32;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (32 - 63);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t0 + 2488U);
    t23 = *((char **)t20);
    t20 = (t0 + 6516U);
    t24 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t4, t18, t23, t20);
    t25 = (t0 + 2248U);
    t26 = *((char **)t25);
    t27 = (32 * 2);
    t28 = (t27 - 1);
    t22 = (64 - t28);
    t29 = (t22 * 1U);
    t30 = (0 + t29);
    t25 = (t26 + t30);
    t31 = (t11 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    memcpy(t25, t24, t33);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t13 = (32 * 2);
    t14 = (t13 - 1);
    t21 = (t14 - 64);
    t15 = (t21 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t13 = (32 * 2);
    t14 = (t13 - 1);
    t15 = (64 - t14);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t8 = ((IEEE_P_2592010699) + 4024);
    t12 = (t18 + 0U);
    t19 = (t12 + 0U);
    *((int *)t19) = 63;
    t19 = (t12 + 4U);
    *((int *)t19) = 0;
    t19 = (t12 + 8U);
    *((int *)t19) = -1;
    t21 = (0 - 63);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t19 = (t12 + 12U);
    *((unsigned int *)t19) = t22;
    t5 = xsi_base_array_concat(t5, t11, t8, (char)97, t2, t18, (char)99, (unsigned char)3, (char)101);
    t19 = (t0 + 2248U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    t22 = (64U + 1U);
    memcpy(t19, t5, t22);

LAB12:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t2 = (t0 + 2368U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 65U);

LAB15:    goto LAB9;

LAB11:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 2248U);
    t8 = *((char **)t5);
    t27 = (32 * 2);
    t28 = (t27 - 1);
    t22 = (64 - t28);
    t29 = (t22 * 1U);
    t30 = (0 + t29);
    t5 = (t8 + t30);
    t12 = (t18 + 0U);
    t19 = (t12 + 0U);
    *((int *)t19) = 63;
    t19 = (t12 + 4U);
    *((int *)t19) = 32;
    t19 = (t12 + 8U);
    *((int *)t19) = -1;
    t34 = (32 - 63);
    t32 = (t34 * -1);
    t32 = (t32 + 1);
    t19 = (t12 + 12U);
    *((unsigned int *)t19) = t32;
    t19 = (t0 + 2488U);
    t20 = *((char **)t19);
    t19 = (t0 + 6516U);
    t23 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t5, t18, t20, t19);
    t24 = (t0 + 2248U);
    t25 = *((char **)t24);
    t35 = (32 * 2);
    t36 = (t35 - 1);
    t32 = (64 - t36);
    t33 = (t32 * 1U);
    t37 = (0 + t33);
    t24 = (t25 + t37);
    t26 = (t11 + 12U);
    t38 = *((unsigned int *)t26);
    t39 = (1U * t38);
    memcpy(t24, t23, t39);
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
    t12 = (t18 + 0U);
    t19 = (t12 + 0U);
    *((int *)t19) = 63;
    t19 = (t12 + 4U);
    *((int *)t19) = 0;
    t19 = (t12 + 8U);
    *((int *)t19) = -1;
    t21 = (0 - 63);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t19 = (t12 + 12U);
    *((unsigned int *)t19) = t22;
    t5 = xsi_base_array_concat(t5, t11, t8, (char)97, t2, t18, (char)99, (unsigned char)2, (char)101);
    t19 = (t0 + 2248U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    t22 = (64U + 1U);
    memcpy(t19, t5, t22);
    goto LAB12;

LAB14:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2248U);
    t5 = *((char **)t2);
    t2 = (t0 + 6484U);
    t8 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t18, t5, t2);
    t12 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t11, t8, t18, 1);
    t19 = (t0 + 2368U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    t23 = (t11 + 12U);
    t15 = *((unsigned int *)t23);
    t16 = (1U * t15);
    memcpy(t19, t12, t16);
    goto LAB15;

LAB17:    xsi_set_current_line(75, ng0);
    t5 = (t0 + 1352U);
    t8 = *((char **)t5);
    t5 = (t0 + 6420U);
    t12 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t18, t8, t5);
    t19 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t11, t12, t18, 1);
    t20 = (t0 + 2728U);
    t23 = *((char **)t20);
    t20 = (t23 + 0);
    t24 = (t11 + 12U);
    t22 = *((unsigned int *)t24);
    t29 = (1U * t22);
    memcpy(t20, t19, t29);
    goto LAB18;

LAB20:    xsi_set_current_line(80, ng0);
    t5 = (t0 + 1512U);
    t8 = *((char **)t5);
    t5 = (t0 + 6436U);
    t12 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t18, t8, t5);
    t19 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t11, t12, t18, 1);
    t20 = (t0 + 2848U);
    t23 = *((char **)t20);
    t20 = (t23 + 0);
    t24 = (t11 + 12U);
    t22 = *((unsigned int *)t24);
    t29 = (1U * t22);
    memcpy(t20, t19, t29);
    goto LAB21;

}


extern void work_a_2349699886_0654636882_init()
{
	static char *pe[] = {(void *)work_a_2349699886_0654636882_p_0};
	xsi_register_didat("work_a_2349699886_0654636882", "isim/ALU_TEST_isim_beh.exe.sim/work/a_2349699886_0654636882.didat");
	xsi_register_executes(pe);
}
