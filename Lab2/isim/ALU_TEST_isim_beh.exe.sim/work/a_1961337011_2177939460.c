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
static const char *ng0 = "C:/Users/SIPL/Desktop/Lab2/Lab2/SR_ARITH.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1961337011_2177939460_p_0(char *t0)
{
    char t22[16];
    char t23[16];
    char t28[16];
    char t35[16];
    char t37[16];
    char t47[16];
    char t52[16];
    char t57[16];
    char t59[16];
    char t71[16];
    char t76[16];
    char t81[16];
    char t86[16];
    char t91[16];
    char t96[16];
    char t101[16];
    char t103[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    unsigned char t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned char t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned char t67;
    unsigned char t68;
    char *t69;
    unsigned char t70;
    char *t72;
    char *t73;
    char *t74;
    unsigned char t75;
    char *t77;
    char *t78;
    char *t79;
    unsigned char t80;
    char *t82;
    char *t83;
    char *t84;
    unsigned char t85;
    char *t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t92;
    char *t93;
    char *t94;
    unsigned char t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;

LAB0:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3832);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1032U);
    t8 = *((char **)t4);
    t9 = (31 - 31);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t0 + 3912);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t13;
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB12:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2528U);
    t4 = *((char **)t2);
    t2 = (t0 + 4040);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t10 = (31 - 4);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t2 = (t5 + t12);
    t8 = (t0 + 2408U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    memcpy(t8, t2, 5U);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 2528U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 32U);
    goto LAB9;

LAB11:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2408U);
    t5 = *((char **)t2);
    t9 = (0 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t5 + t12);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (1 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (2 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (3 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (4 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB26;

LAB28:
LAB27:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(63, ng0);
    t8 = (t0 + 1832U);
    t14 = *((char **)t8);
    t13 = *((unsigned char *)t14);
    t8 = (t0 + 2528U);
    t15 = *((char **)t8);
    t19 = (31 - 31);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t8 = (t15 + t21);
    t17 = ((IEEE_P_2592010699) + 4024);
    t18 = (t23 + 0U);
    t24 = (t18 + 0U);
    *((int *)t24) = 31;
    t24 = (t18 + 4U);
    *((int *)t24) = 1;
    t24 = (t18 + 8U);
    *((int *)t24) = -1;
    t25 = (1 - 31);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t18 + 12U);
    *((unsigned int *)t24) = t26;
    t16 = xsi_base_array_concat(t16, t22, t17, (char)99, t13, (char)97, t8, t23, (char)101);
    t24 = (t0 + 2528U);
    t27 = *((char **)t24);
    t24 = (t27 + 0);
    t26 = (1U + 31U);
    memcpy(t24, t16, t26);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (0 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB15;

LAB17:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 1832U);
    t8 = *((char **)t5);
    t6 = *((unsigned char *)t8);
    t5 = (t0 + 1832U);
    t14 = *((char **)t5);
    t7 = *((unsigned char *)t14);
    t15 = ((IEEE_P_2592010699) + 4024);
    t5 = xsi_base_array_concat(t5, t22, t15, (char)99, t6, (char)99, t7, (char)101);
    t16 = (t0 + 2528U);
    t17 = *((char **)t16);
    t19 = (31 - 31);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t24 = ((IEEE_P_2592010699) + 4024);
    t27 = (t28 + 0U);
    t29 = (t27 + 0U);
    *((int *)t29) = 31;
    t29 = (t27 + 4U);
    *((int *)t29) = 2;
    t29 = (t27 + 8U);
    *((int *)t29) = -1;
    t25 = (2 - 31);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t29 = (t27 + 12U);
    *((unsigned int *)t29) = t26;
    t18 = xsi_base_array_concat(t18, t23, t24, (char)97, t5, t22, (char)97, t16, t28, (char)101);
    t29 = (t0 + 2528U);
    t30 = *((char **)t29);
    t29 = (t30 + 0);
    t26 = (1U + 1U);
    t31 = (t26 + 30U);
    memcpy(t29, t18, t31);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (1 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB18;

LAB20:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 1832U);
    t8 = *((char **)t5);
    t6 = *((unsigned char *)t8);
    t5 = (t0 + 1832U);
    t14 = *((char **)t5);
    t7 = *((unsigned char *)t14);
    t15 = ((IEEE_P_2592010699) + 4024);
    t5 = xsi_base_array_concat(t5, t22, t15, (char)99, t6, (char)99, t7, (char)101);
    t16 = (t0 + 1832U);
    t17 = *((char **)t16);
    t13 = *((unsigned char *)t17);
    t18 = ((IEEE_P_2592010699) + 4024);
    t16 = xsi_base_array_concat(t16, t23, t18, (char)97, t5, t22, (char)99, t13, (char)101);
    t24 = (t0 + 1832U);
    t27 = *((char **)t24);
    t32 = *((unsigned char *)t27);
    t29 = ((IEEE_P_2592010699) + 4024);
    t24 = xsi_base_array_concat(t24, t28, t29, (char)97, t16, t23, (char)99, t32, (char)101);
    t30 = (t0 + 2528U);
    t33 = *((char **)t30);
    t19 = (31 - 31);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t30 = (t33 + t21);
    t36 = ((IEEE_P_2592010699) + 4024);
    t38 = (t37 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = 31;
    t39 = (t38 + 4U);
    *((int *)t39) = 4;
    t39 = (t38 + 8U);
    *((int *)t39) = -1;
    t25 = (4 - 31);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t26;
    t34 = xsi_base_array_concat(t34, t35, t36, (char)97, t24, t28, (char)97, t30, t37, (char)101);
    t39 = (t0 + 2528U);
    t40 = *((char **)t39);
    t39 = (t40 + 0);
    t26 = (1U + 1U);
    t31 = (t26 + 1U);
    t41 = (t31 + 1U);
    t42 = (t41 + 28U);
    memcpy(t39, t34, t42);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (2 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB21;

LAB23:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 1832U);
    t8 = *((char **)t5);
    t6 = *((unsigned char *)t8);
    t5 = (t0 + 1832U);
    t14 = *((char **)t5);
    t7 = *((unsigned char *)t14);
    t15 = ((IEEE_P_2592010699) + 4024);
    t5 = xsi_base_array_concat(t5, t22, t15, (char)99, t6, (char)99, t7, (char)101);
    t16 = (t0 + 1832U);
    t17 = *((char **)t16);
    t13 = *((unsigned char *)t17);
    t18 = ((IEEE_P_2592010699) + 4024);
    t16 = xsi_base_array_concat(t16, t23, t18, (char)97, t5, t22, (char)99, t13, (char)101);
    t24 = (t0 + 1832U);
    t27 = *((char **)t24);
    t32 = *((unsigned char *)t27);
    t29 = ((IEEE_P_2592010699) + 4024);
    t24 = xsi_base_array_concat(t24, t28, t29, (char)97, t16, t23, (char)99, t32, (char)101);
    t30 = (t0 + 1832U);
    t33 = *((char **)t30);
    t43 = *((unsigned char *)t33);
    t34 = ((IEEE_P_2592010699) + 4024);
    t30 = xsi_base_array_concat(t30, t35, t34, (char)97, t24, t28, (char)99, t43, (char)101);
    t36 = (t0 + 1832U);
    t38 = *((char **)t36);
    t44 = *((unsigned char *)t38);
    t39 = ((IEEE_P_2592010699) + 4024);
    t36 = xsi_base_array_concat(t36, t37, t39, (char)97, t30, t35, (char)99, t44, (char)101);
    t40 = (t0 + 1832U);
    t45 = *((char **)t40);
    t46 = *((unsigned char *)t45);
    t48 = ((IEEE_P_2592010699) + 4024);
    t40 = xsi_base_array_concat(t40, t47, t48, (char)97, t36, t37, (char)99, t46, (char)101);
    t49 = (t0 + 1832U);
    t50 = *((char **)t49);
    t51 = *((unsigned char *)t50);
    t53 = ((IEEE_P_2592010699) + 4024);
    t49 = xsi_base_array_concat(t49, t52, t53, (char)97, t40, t47, (char)99, t51, (char)101);
    t54 = (t0 + 2528U);
    t55 = *((char **)t54);
    t19 = (31 - 31);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t54 = (t55 + t21);
    t58 = ((IEEE_P_2592010699) + 4024);
    t60 = (t59 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = 31;
    t61 = (t60 + 4U);
    *((int *)t61) = 8;
    t61 = (t60 + 8U);
    *((int *)t61) = -1;
    t25 = (8 - 31);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t26;
    t56 = xsi_base_array_concat(t56, t57, t58, (char)97, t49, t52, (char)97, t54, t59, (char)101);
    t61 = (t0 + 2528U);
    t62 = *((char **)t61);
    t61 = (t62 + 0);
    t26 = (1U + 1U);
    t31 = (t26 + 1U);
    t41 = (t31 + 1U);
    t42 = (t41 + 1U);
    t63 = (t42 + 1U);
    t64 = (t63 + 1U);
    t65 = (t64 + 1U);
    t66 = (t65 + 24U);
    memcpy(t61, t56, t66);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (3 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB24;

LAB26:    xsi_set_current_line(83, ng0);
    t5 = (t0 + 1832U);
    t8 = *((char **)t5);
    t6 = *((unsigned char *)t8);
    t5 = (t0 + 1832U);
    t14 = *((char **)t5);
    t7 = *((unsigned char *)t14);
    t15 = ((IEEE_P_2592010699) + 4024);
    t5 = xsi_base_array_concat(t5, t22, t15, (char)99, t6, (char)99, t7, (char)101);
    t16 = (t0 + 1832U);
    t17 = *((char **)t16);
    t13 = *((unsigned char *)t17);
    t18 = ((IEEE_P_2592010699) + 4024);
    t16 = xsi_base_array_concat(t16, t23, t18, (char)97, t5, t22, (char)99, t13, (char)101);
    t24 = (t0 + 1832U);
    t27 = *((char **)t24);
    t32 = *((unsigned char *)t27);
    t29 = ((IEEE_P_2592010699) + 4024);
    t24 = xsi_base_array_concat(t24, t28, t29, (char)97, t16, t23, (char)99, t32, (char)101);
    t30 = (t0 + 1832U);
    t33 = *((char **)t30);
    t43 = *((unsigned char *)t33);
    t34 = ((IEEE_P_2592010699) + 4024);
    t30 = xsi_base_array_concat(t30, t35, t34, (char)97, t24, t28, (char)99, t43, (char)101);
    t36 = (t0 + 1832U);
    t38 = *((char **)t36);
    t44 = *((unsigned char *)t38);
    t39 = ((IEEE_P_2592010699) + 4024);
    t36 = xsi_base_array_concat(t36, t37, t39, (char)97, t30, t35, (char)99, t44, (char)101);
    t40 = (t0 + 1832U);
    t45 = *((char **)t40);
    t46 = *((unsigned char *)t45);
    t48 = ((IEEE_P_2592010699) + 4024);
    t40 = xsi_base_array_concat(t40, t47, t48, (char)97, t36, t37, (char)99, t46, (char)101);
    t49 = (t0 + 1832U);
    t50 = *((char **)t49);
    t51 = *((unsigned char *)t50);
    t53 = ((IEEE_P_2592010699) + 4024);
    t49 = xsi_base_array_concat(t49, t52, t53, (char)97, t40, t47, (char)99, t51, (char)101);
    t54 = (t0 + 1832U);
    t55 = *((char **)t54);
    t67 = *((unsigned char *)t55);
    t56 = ((IEEE_P_2592010699) + 4024);
    t54 = xsi_base_array_concat(t54, t57, t56, (char)97, t49, t52, (char)99, t67, (char)101);
    t58 = (t0 + 1832U);
    t60 = *((char **)t58);
    t68 = *((unsigned char *)t60);
    t61 = ((IEEE_P_2592010699) + 4024);
    t58 = xsi_base_array_concat(t58, t59, t61, (char)97, t54, t57, (char)99, t68, (char)101);
    t62 = (t0 + 1832U);
    t69 = *((char **)t62);
    t70 = *((unsigned char *)t69);
    t72 = ((IEEE_P_2592010699) + 4024);
    t62 = xsi_base_array_concat(t62, t71, t72, (char)97, t58, t59, (char)99, t70, (char)101);
    t73 = (t0 + 1832U);
    t74 = *((char **)t73);
    t75 = *((unsigned char *)t74);
    t77 = ((IEEE_P_2592010699) + 4024);
    t73 = xsi_base_array_concat(t73, t76, t77, (char)97, t62, t71, (char)99, t75, (char)101);
    t78 = (t0 + 1832U);
    t79 = *((char **)t78);
    t80 = *((unsigned char *)t79);
    t82 = ((IEEE_P_2592010699) + 4024);
    t78 = xsi_base_array_concat(t78, t81, t82, (char)97, t73, t76, (char)99, t80, (char)101);
    t83 = (t0 + 1832U);
    t84 = *((char **)t83);
    t85 = *((unsigned char *)t84);
    t87 = ((IEEE_P_2592010699) + 4024);
    t83 = xsi_base_array_concat(t83, t86, t87, (char)97, t78, t81, (char)99, t85, (char)101);
    t88 = (t0 + 1832U);
    t89 = *((char **)t88);
    t90 = *((unsigned char *)t89);
    t92 = ((IEEE_P_2592010699) + 4024);
    t88 = xsi_base_array_concat(t88, t91, t92, (char)97, t83, t86, (char)99, t90, (char)101);
    t93 = (t0 + 1832U);
    t94 = *((char **)t93);
    t95 = *((unsigned char *)t94);
    t97 = ((IEEE_P_2592010699) + 4024);
    t93 = xsi_base_array_concat(t93, t96, t97, (char)97, t88, t91, (char)99, t95, (char)101);
    t98 = (t0 + 2528U);
    t99 = *((char **)t98);
    t19 = (31 - 31);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t98 = (t99 + t21);
    t102 = ((IEEE_P_2592010699) + 4024);
    t104 = (t103 + 0U);
    t105 = (t104 + 0U);
    *((int *)t105) = 31;
    t105 = (t104 + 4U);
    *((int *)t105) = 16;
    t105 = (t104 + 8U);
    *((int *)t105) = -1;
    t25 = (16 - 31);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t105 = (t104 + 12U);
    *((unsigned int *)t105) = t26;
    t100 = xsi_base_array_concat(t100, t101, t102, (char)97, t93, t96, (char)97, t98, t103, (char)101);
    t105 = (t0 + 2528U);
    t106 = *((char **)t105);
    t105 = (t106 + 0);
    t26 = (1U + 1U);
    t31 = (t26 + 1U);
    t41 = (t31 + 1U);
    t42 = (t41 + 1U);
    t63 = (t42 + 1U);
    t64 = (t63 + 1U);
    t65 = (t64 + 1U);
    t66 = (t65 + 1U);
    t107 = (t66 + 1U);
    t108 = (t107 + 1U);
    t109 = (t108 + 1U);
    t110 = (t109 + 1U);
    t111 = (t110 + 1U);
    t112 = (t111 + 1U);
    t113 = (t112 + 1U);
    t114 = (t113 + 16U);
    memcpy(t105, t100, t114);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t9 = (4 - 4);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB27;

}


extern void work_a_1961337011_2177939460_init()
{
	static char *pe[] = {(void *)work_a_1961337011_2177939460_p_0};
	xsi_register_didat("work_a_1961337011_2177939460", "isim/ALU_TEST_isim_beh.exe.sim/work/a_1961337011_2177939460.didat");
	xsi_register_executes(pe);
}
