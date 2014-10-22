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
static const char *ng0 = "C:/Verilog Projects/adv_processors_verilog_hw_1/car_ctrl.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 2472);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 2);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2312);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4528);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 2632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB2;

}

static void Always_40_2(char *t0)
{
    char t9[8];
    char t20[8];
    char t39[8];
    char t47[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4544);
    *((int *)t2) = 1;
    t3 = (t0 + 4240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2632);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t2) != 0)
        goto LAB98;

LAB99:    t6 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB100;

LAB101:    memcpy(t47, t9, 8);

LAB102:    t62 = (t47 + 4);
    t78 = *((unsigned int *)t62);
    t80 = (~(t78));
    t81 = *((unsigned int *)t47);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB114;

LAB115:
LAB116:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t2) != 0)
        goto LAB120;

LAB121:    t6 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB122;

LAB123:    memcpy(t47, t9, 8);

LAB124:    t62 = (t47 + 4);
    t78 = *((unsigned int *)t62);
    t80 = (~(t78));
    t81 = *((unsigned int *)t47);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB136;

LAB137:
LAB138:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);

LAB16:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 1592U);
    t7 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t5) != 0)
        goto LAB19;

LAB20:    t16 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB21;

LAB22:    memcpy(t47, t9, 8);

LAB23:    t79 = (t47 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t47);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB15;

LAB9:    xsi_set_current_line(52, ng0);

LAB41:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1592U);
    t5 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t5 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t2) != 0)
        goto LAB44;

LAB45:    t7 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t7);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB46;

LAB47:    memcpy(t47, t9, 8);

LAB48:    t61 = (t47 + 4);
    t80 = *((unsigned int *)t61);
    t81 = (~(t80));
    t82 = *((unsigned int *)t47);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB62;

LAB63:
LAB64:    goto LAB15;

LAB11:    xsi_set_current_line(59, ng0);

LAB66:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1592U);
    t5 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t5 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t2) != 0)
        goto LAB69;

LAB70:    t7 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t7);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB71;

LAB72:    memcpy(t47, t9, 8);

LAB73:    t61 = (t47 + 4);
    t80 = *((unsigned int *)t61);
    t81 = (~(t80));
    t82 = *((unsigned int *)t47);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB87;

LAB88:
LAB89:    goto LAB15;

LAB13:    xsi_set_current_line(66, ng0);

LAB91:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1752U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB92;

LAB93:
LAB94:    goto LAB15;

LAB17:    *((unsigned int *)t9) = 1;
    goto LAB20;

LAB19:    t15 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB20;

LAB21:    t21 = (t0 + 1752U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t22 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t21) == 0)
        goto LAB24;

LAB26:    t28 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t28) = 1;

LAB27:    t29 = (t20 + 4);
    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    *((unsigned int *)t20) = t32;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB29;

LAB28:    t37 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t37 & 1U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 1U);
    memset(t39, 0, 8);
    t40 = (t20 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t20);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t40) != 0)
        goto LAB32;

LAB33:    t48 = *((unsigned int *)t9);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t9 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB23;

LAB24:    *((unsigned int *)t20) = 1;
    goto LAB27;

LAB29:    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t30);
    *((unsigned int *)t20) = (t33 | t34);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t35 | t36);
    goto LAB28;

LAB30:    *((unsigned int *)t39) = 1;
    goto LAB33;

LAB32:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB33;

LAB34:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t9 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t9);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB36;

LAB37:    xsi_set_current_line(46, ng0);

LAB40:    xsi_set_current_line(47, ng0);
    t85 = (t0 + 608);
    t86 = *((char **)t85);
    t85 = (t0 + 2632);
    xsi_vlogvar_assign_value(t85, t86, 0, 0, 2);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB39;

LAB42:    *((unsigned int *)t9) = 1;
    goto LAB45;

LAB44:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB46:    t15 = (t0 + 1752U);
    t16 = *((char **)t15);
    memset(t20, 0, 8);
    t15 = (t16 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t15) == 0)
        goto LAB49;

LAB51:    t21 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;

LAB52:    t22 = (t20 + 4);
    t28 = (t16 + 4);
    t31 = *((unsigned int *)t16);
    t32 = (~(t31));
    *((unsigned int *)t20) = t32;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB54;

LAB53:    t37 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t37 & 1U);
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & 1U);
    memset(t39, 0, 8);
    t29 = (t20 + 4);
    t41 = *((unsigned int *)t29);
    t42 = (~(t41));
    t43 = *((unsigned int *)t20);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t29) != 0)
        goto LAB57;

LAB58:    t48 = *((unsigned int *)t9);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t40 = (t9 + 4);
    t46 = (t39 + 4);
    t51 = (t47 + 4);
    t54 = *((unsigned int *)t40);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t51);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB48;

LAB49:    *((unsigned int *)t20) = 1;
    goto LAB52;

LAB54:    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t20) = (t33 | t34);
    t35 = *((unsigned int *)t22);
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t35 | t36);
    goto LAB53;

LAB55:    *((unsigned int *)t39) = 1;
    goto LAB58;

LAB57:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB58;

LAB59:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t51);
    *((unsigned int *)t47) = (t59 | t60);
    t52 = (t9 + 4);
    t53 = (t39 + 4);
    t63 = *((unsigned int *)t9);
    t64 = (~(t63));
    t65 = *((unsigned int *)t52);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t53);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t75 & t73);
    t76 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB61;

LAB62:    xsi_set_current_line(53, ng0);

LAB65:    xsi_set_current_line(54, ng0);
    t62 = (t0 + 744);
    t79 = *((char **)t62);
    t62 = (t0 + 2632);
    xsi_vlogvar_assign_value(t62, t79, 0, 0, 2);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB64;

LAB67:    *((unsigned int *)t9) = 1;
    goto LAB70;

LAB69:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB70;

LAB71:    t15 = (t0 + 1752U);
    t16 = *((char **)t15);
    memset(t20, 0, 8);
    t15 = (t16 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB77;

LAB75:    if (*((unsigned int *)t15) == 0)
        goto LAB74;

LAB76:    t21 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;

LAB77:    t22 = (t20 + 4);
    t28 = (t16 + 4);
    t31 = *((unsigned int *)t16);
    t32 = (~(t31));
    *((unsigned int *)t20) = t32;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB79;

LAB78:    t37 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t37 & 1U);
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & 1U);
    memset(t39, 0, 8);
    t29 = (t20 + 4);
    t41 = *((unsigned int *)t29);
    t42 = (~(t41));
    t43 = *((unsigned int *)t20);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t29) != 0)
        goto LAB82;

LAB83:    t48 = *((unsigned int *)t9);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t40 = (t9 + 4);
    t46 = (t39 + 4);
    t51 = (t47 + 4);
    t54 = *((unsigned int *)t40);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t51);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB73;

LAB74:    *((unsigned int *)t20) = 1;
    goto LAB77;

LAB79:    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t20) = (t33 | t34);
    t35 = *((unsigned int *)t22);
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t35 | t36);
    goto LAB78;

LAB80:    *((unsigned int *)t39) = 1;
    goto LAB83;

LAB82:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB83;

LAB84:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t51);
    *((unsigned int *)t47) = (t59 | t60);
    t52 = (t9 + 4);
    t53 = (t39 + 4);
    t63 = *((unsigned int *)t9);
    t64 = (~(t63));
    t65 = *((unsigned int *)t52);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t53);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t75 & t73);
    t76 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB86;

LAB87:    xsi_set_current_line(60, ng0);

LAB90:    xsi_set_current_line(61, ng0);
    t62 = (t0 + 880);
    t79 = *((char **)t62);
    t62 = (t0 + 2632);
    xsi_vlogvar_assign_value(t62, t79, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB89;

LAB92:    xsi_set_current_line(67, ng0);

LAB95:    xsi_set_current_line(68, ng0);
    t6 = (t0 + 744);
    t7 = *((char **)t6);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 2);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB94;

LAB96:    *((unsigned int *)t9) = 1;
    goto LAB99;

LAB98:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB99;

LAB100:    t7 = (t0 + 2472);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    t21 = ((char*)((ng1)));
    memset(t20, 0, 8);
    t22 = (t16 + 4);
    t28 = (t21 + 4);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t21);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t31 = (t26 ^ t27);
    t32 = (t25 | t31);
    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t28);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB104;

LAB103:    if (t35 != 0)
        goto LAB105;

LAB106:    memset(t39, 0, 8);
    t30 = (t20 + 4);
    t38 = *((unsigned int *)t30);
    t41 = (~(t38));
    t42 = *((unsigned int *)t20);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t30) != 0)
        goto LAB109;

LAB110:    t45 = *((unsigned int *)t9);
    t48 = *((unsigned int *)t39);
    t49 = (t45 & t48);
    *((unsigned int *)t47) = t49;
    t46 = (t9 + 4);
    t51 = (t39 + 4);
    t52 = (t47 + 4);
    t50 = *((unsigned int *)t46);
    t54 = *((unsigned int *)t51);
    t55 = (t50 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB102;

LAB104:    *((unsigned int *)t20) = 1;
    goto LAB106;

LAB105:    t29 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t39) = 1;
    goto LAB110;

LAB109:    t40 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB110;

LAB111:    t58 = *((unsigned int *)t47);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t47) = (t58 | t59);
    t53 = (t9 + 4);
    t61 = (t39 + 4);
    t60 = *((unsigned int *)t9);
    t63 = (~(t60));
    t64 = *((unsigned int *)t53);
    t65 = (~(t64));
    t66 = *((unsigned int *)t39);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t8 = (t63 & t65);
    t71 = (t67 & t69);
    t70 = (~(t8));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t70);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t76 & t70);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    goto LAB113;

LAB114:    xsi_set_current_line(75, ng0);

LAB117:    xsi_set_current_line(76, ng0);
    t79 = (t0 + 2472);
    t85 = (t79 + 56U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng5)));
    memset(t88, 0, 8);
    xsi_vlog_unsigned_minus(t88, 32, t86, 2, t87, 32);
    t89 = (t0 + 2632);
    xsi_vlogvar_assign_value(t89, t88, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t5, 2, t6, 32);
    t7 = (t0 + 2792);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 2);
    goto LAB116;

LAB118:    *((unsigned int *)t9) = 1;
    goto LAB121;

LAB120:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB121;

LAB122:    t7 = (t0 + 2472);
    t15 = (t7 + 56U);
    t16 = *((char **)t15);
    t21 = ((char*)((ng1)));
    memset(t20, 0, 8);
    t22 = (t16 + 4);
    t28 = (t21 + 4);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t21);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t31 = (t26 ^ t27);
    t32 = (t25 | t31);
    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t28);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB128;

LAB125:    if (t35 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t20) = 1;

LAB128:    memset(t39, 0, 8);
    t30 = (t20 + 4);
    t38 = *((unsigned int *)t30);
    t41 = (~(t38));
    t42 = *((unsigned int *)t20);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t30) != 0)
        goto LAB131;

LAB132:    t45 = *((unsigned int *)t9);
    t48 = *((unsigned int *)t39);
    t49 = (t45 & t48);
    *((unsigned int *)t47) = t49;
    t46 = (t9 + 4);
    t51 = (t39 + 4);
    t52 = (t47 + 4);
    t50 = *((unsigned int *)t46);
    t54 = *((unsigned int *)t51);
    t55 = (t50 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB124;

LAB127:    t29 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB128;

LAB129:    *((unsigned int *)t39) = 1;
    goto LAB132;

LAB131:    t40 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB132;

LAB133:    t58 = *((unsigned int *)t47);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t47) = (t58 | t59);
    t53 = (t9 + 4);
    t61 = (t39 + 4);
    t60 = *((unsigned int *)t9);
    t63 = (~(t60));
    t64 = *((unsigned int *)t53);
    t65 = (~(t64));
    t66 = *((unsigned int *)t39);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t8 = (t63 & t65);
    t71 = (t67 & t69);
    t70 = (~(t8));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t70);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t76 & t70);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    goto LAB135;

LAB136:    xsi_set_current_line(79, ng0);

LAB139:    xsi_set_current_line(80, ng0);
    t79 = (t0 + 2472);
    t85 = (t79 + 56U);
    t86 = *((char **)t85);
    t87 = (t0 + 2632);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 2);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB138;

}


extern void work_m_00000000002221449562_2140119306_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_35_1,(void *)Always_40_2};
	xsi_register_didat("work_m_00000000002221449562_2140119306", "isim/tb_car_ctrl_isim_beh.exe.sim/work/m_00000000002221449562_2140119306.didat");
	xsi_register_executes(pe);
}
