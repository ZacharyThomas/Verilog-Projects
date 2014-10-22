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
static const char *ng0 = "C:/Verilog Projects/adv_processors_verilog_hw_1/tb_car_ctrl.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {3U, 0U};



static void Always_43_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3248);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2360);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

static void Initial_47_1(char *t0)
{
    char t14[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
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
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3496);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3496);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3496);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);

LAB8:    t2 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB9);
    t3 = (t0 + 3496);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB10:    xsi_set_current_line(61, ng0);

LAB11:    t4 = ((char*)((ng2)));
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB9:    t3 = (t0 + 3496);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    xsi_set_current_line(78, ng0);

LAB36:    t2 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB37);
    t3 = (t0 + 3496);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB38:    xsi_set_current_line(79, ng0);

LAB39:    t4 = ((char*)((ng2)));
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB40;

LAB41:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB37:    t3 = (t0 + 3496);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB1;

LAB12:    xsi_set_current_line(61, ng0);

LAB14:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2040);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4008);
    *((int *)t2) = 1;
    t3 = (t0 + 3720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(63, ng0);

LAB16:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 2520);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 1640U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t11 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB17:    if (t20 != 0)
        goto LAB19;

LAB20:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB29;

LAB26:    if (t20 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t14) = 1;

LAB29:    t15 = (t14 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB11;

LAB18:    *((unsigned int *)t14) = 1;
    goto LAB20;

LAB19:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(64, ng0);

LAB24:    xsi_set_current_line(65, ng0);
    t30 = (t0 + 2520);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 2, t33, 32);
    t35 = (t0 + 2520);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    goto LAB23;

LAB28:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(69, ng0);

LAB33:    xsi_set_current_line(70, ng0);
    t23 = (t0 + 3496);
    xsi_process_wait(t23, 2000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    goto LAB9;

LAB35:    goto LAB32;

LAB40:    xsi_set_current_line(79, ng0);

LAB42:    xsi_set_current_line(80, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2200);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4024);
    *((int *)t2) = 1;
    t3 = (t0 + 3720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(81, ng0);

LAB44:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 2520);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 1640U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t11 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB46;

LAB45:    if (t20 != 0)
        goto LAB47;

LAB48:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB57;

LAB54:    if (t20 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t14) = 1;

LAB57:    t15 = (t14 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB39;

LAB46:    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB47:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(82, ng0);

LAB52:    xsi_set_current_line(83, ng0);
    t30 = (t0 + 2520);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_minus(t34, 32, t32, 2, t33, 32);
    t35 = (t0 + 2520);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 2);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3496);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    goto LAB51;

LAB56:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(87, ng0);

LAB61:    xsi_set_current_line(88, ng0);
    t23 = (t0 + 3496);
    xsi_process_wait(t23, 2000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    goto LAB37;

LAB63:    goto LAB60;

}


extern void work_m_00000000002244644244_3108587104_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Initial_47_1};
	xsi_register_didat("work_m_00000000002244644244_3108587104", "isim/tb_car_ctrl_isim_beh.exe.sim/work/m_00000000002244644244_3108587104.didat");
	xsi_register_executes(pe);
}
