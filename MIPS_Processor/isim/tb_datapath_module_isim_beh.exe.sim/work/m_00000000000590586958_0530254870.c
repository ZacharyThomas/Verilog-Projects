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
static const char *ng0 = "C:/Verilog Projects/MIPS_Processor/alu_module.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {0U, 0U};

static void NetReassign_45_1(char *);
static void NetReassign_48_2(char *);
static void NetReassign_51_3(char *);
static void NetReassign_56_4(char *);
static void NetReassign_60_5(char *);
static void NetReassign_64_6(char *);
static void NetReassign_70_7(char *);
static void NetReassign_76_8(char *);


static void Always_35_0(char *t0)
{
    char t8[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t32;

LAB0:    t1 = (t0 + 5216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 7768);
    *((int *)t2) = 1;
    t3 = (t0 + 5248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t0 + 4296);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = (t0 + 4136);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);

LAB13:    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t32 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 608);
    t4 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t32 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t32 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1288);
    t4 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t32 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t32 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t32 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1152);
    t4 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t32 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1424);
    t4 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t32 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3816);
    xsi_set_assignedflag(t2);
    t4 = (t0 + 10132);
    *((int *)t4) = 1;
    NetReassign_76_8(t0);

LAB32:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 3656);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB12;

LAB14:    xsi_set_current_line(44, ng0);

LAB33:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3816);
    xsi_set_assignedflag(t2);
    t5 = (t0 + 10104);
    *((int *)t5) = 1;
    NetReassign_45_1(t0);
    goto LAB32;

LAB16:    xsi_set_current_line(47, ng0);

LAB34:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3816);
    xsi_set_assignedflag(t2);
    t5 = (t0 + 10108);
    *((int *)t5) = 1;
    NetReassign_48_2(t0);
    goto LAB32;

LAB18:    xsi_set_current_line(50, ng0);

LAB35:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3816);
    xsi_set_assignedflag(t2);
    t5 = (t0 + 10112);
    *((int *)t5) = 1;
    NetReassign_51_3(t0);
    goto LAB32;

LAB20:    xsi_set_current_line(54, ng0);

LAB36:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2296U);
    t5 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    *((unsigned int *)t8) = t12;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB38;

LAB37:    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 4294967295U);
    t7 = ((char*)((ng2)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t8, 32, t7, 32);
    t9 = (t0 + 4296);
    xsi_vlogvar_assign_value(t9, t33, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3816);
    xsi_set_assignedflag(t2);
    t4 = (t0 + 10116);
    *((int *)t4) = 1;
    NetReassign_56_4(t0);
    goto LAB32;

LAB22:    xsi_set_current_line(59, ng0);

LAB39:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3816);
    xsi_set_assignedflag(t2);
    t5 = (t0 + 10120);
    *((int *)t5) = 1;
    NetReassign_60_5(t0);
    goto LAB32;

LAB24:    xsi_set_current_line(63, ng0);

LAB40:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3816);
    xsi_set_assignedflag(t2);
    t5 = (t0 + 10124);
    *((int *)t5) = 1;
    NetReassign_64_6(t0);
    goto LAB32;

LAB26:    xsi_set_current_line(68, ng0);

LAB41:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2296U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t5, 32, t2, 32);
    t6 = (t0 + 4296);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3816);
    xsi_set_assignedflag(t2);
    t4 = (t0 + 10128);
    *((int *)t4) = 1;
    NetReassign_70_7(t0);
    goto LAB32;

LAB28:    xsi_set_current_line(72, ng0);

LAB42:    goto LAB32;

LAB38:    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t13 | t14);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t2) = (t15 | t16);
    goto LAB37;

}

static void NetReassign_45_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 5464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t3 = 0;
    t2 = (t0 + 2136U);
    t4 = *((char **)t2);
    t2 = (t0 + 2296U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t37 = (t0 + 10104);
    if (*((int *)t37) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t40 = (t0 + 7784);
    *((int *)t40) = 0;

LAB11:
LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    t38 = (t0 + 3816);
    xsi_vlogvar_assignassignvalue(t38, t6, 0, 0, 0, 32, ((int*)(t37)));
    t3 = 1;
    goto LAB8;

LAB9:    t39 = (t0 + 7784);
    *((int *)t39) = 1;
    goto LAB11;

}

static void NetReassign_48_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 5712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t3 = 0;
    t2 = (t0 + 2136U);
    t4 = *((char **)t2);
    t2 = (t0 + 2296U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t33 = (t0 + 10108);
    if (*((int *)t33) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t36 = (t0 + 7800);
    *((int *)t36) = 0;

LAB11:
LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    goto LAB6;

LAB7:    t34 = (t0 + 3816);
    xsi_vlogvar_assignassignvalue(t34, t6, 0, 0, 0, 32, ((int*)(t33)));
    t3 = 1;
    goto LAB8;

LAB9:    t35 = (t0 + 7800);
    *((int *)t35) = 1;
    goto LAB11;

}

static void NetReassign_51_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t3 = 0;
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t0 + 10112);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 7816);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 3816);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 7816);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_56_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t3 = 0;
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t0 + 10116);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 7832);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 3816);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 7832);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_60_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t3 = 0;
    t2 = (t0 + 2936U);
    t4 = *((char **)t2);
    t2 = (t0 + 10120);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 7848);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 3816);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 7848);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_64_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 6704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t3 = 0;
    t2 = (t0 + 2136U);
    t4 = *((char **)t2);
    t2 = (t0 + 2296U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t4, 32, t5, 32);
    t2 = (t0 + 10124);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 7864);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 3816);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 7864);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_70_7(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t3 = 0;
    t2 = (t0 + 4296);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 32, t5, 32, t6, 32);
    t8 = (t0 + 10128);
    if (*((int *)t8) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t11 = (t0 + 7880);
    *((int *)t11) = 0;

LAB8:
LAB1:    return;
LAB4:    t9 = (t0 + 3816);
    xsi_vlogvar_assignassignvalue(t9, t7, 0, 0, 0, 32, ((int*)(t8)));
    t3 = 1;
    goto LAB5;

LAB6:    t10 = (t0 + 7880);
    *((int *)t10) = 1;
    goto LAB8;

}

static void NetReassign_76_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t3 = 0;
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10132);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 3816);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 32, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 7960);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000000590586958_0530254870_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)NetReassign_45_1,(void *)NetReassign_48_2,(void *)NetReassign_51_3,(void *)NetReassign_56_4,(void *)NetReassign_60_5,(void *)NetReassign_64_6,(void *)NetReassign_70_7,(void *)NetReassign_76_8,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000590586958_0530254870", "isim/tb_datapath_module_isim_beh.exe.sim/work/m_00000000000590586958_0530254870.didat");
	xsi_register_executes(pe);
}
