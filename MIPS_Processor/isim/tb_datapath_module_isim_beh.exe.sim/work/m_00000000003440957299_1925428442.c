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
static const char *ng0 = "C:/Verilog Projects/MIPS_Processor/alu_control_module.v";
static int ng1[] = {8, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {24U, 0U};
static int ng6[] = {3, 0};
static unsigned int ng7[] = {26U, 0U};
static int ng8[] = {4, 0};
static unsigned int ng9[] = {32U, 0U};
static int ng10[] = {2, 0};
static unsigned int ng11[] = {34U, 0U};
static int ng12[] = {6, 0};
static unsigned int ng13[] = {36U, 0U};
static int ng14[] = {0, 0};
static unsigned int ng15[] = {37U, 0U};
static int ng16[] = {1, 0};
static unsigned int ng17[] = {3U, 0U};
static int ng18[] = {5, 0};



static void Always_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);

LAB16:    goto LAB15;

LAB9:    xsi_set_current_line(36, ng0);

LAB17:    goto LAB15;

LAB11:    xsi_set_current_line(40, ng0);

LAB18:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB19:    t4 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t7 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB15;

LAB13:    xsi_set_current_line(71, ng0);

LAB39:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng18)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB15;

LAB20:    xsi_set_current_line(44, ng0);

LAB33:    xsi_set_current_line(45, ng0);
    t8 = ((char*)((ng6)));
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    goto LAB32;

LAB22:    xsi_set_current_line(48, ng0);

LAB34:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng8)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB32;

LAB24:    xsi_set_current_line(52, ng0);

LAB35:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng10)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB32;

LAB26:    xsi_set_current_line(56, ng0);

LAB36:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng12)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB32;

LAB28:    xsi_set_current_line(60, ng0);

LAB37:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng14)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB32;

LAB30:    xsi_set_current_line(64, ng0);

LAB38:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng16)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    goto LAB32;

}


extern void work_m_00000000003440957299_1925428442_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000003440957299_1925428442", "isim/tb_datapath_module_isim_beh.exe.sim/work/m_00000000003440957299_1925428442.didat");
	xsi_register_executes(pe);
}
