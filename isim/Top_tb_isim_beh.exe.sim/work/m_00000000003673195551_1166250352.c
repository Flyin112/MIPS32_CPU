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
static const char *ng0 = "F:/Documents/Verilog HDL/MIPS_CPU/BranchJumpAddr.v";
static unsigned int ng1[] = {2U, 0U};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Always_32_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t12[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 1208U);
    t11 = *((char **)t9);
    memset(t12, 0, 8);
    t9 = (t10 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB17;

LAB14:    if (t23 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t12) = 1;

LAB17:    memset(t8, 0, 8);
    t27 = (t12 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t27) != 0)
        goto LAB20;

LAB21:    t34 = (t8 + 4);
    t35 = *((unsigned int *)t8);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB22;

LAB23:    t43 = *((unsigned int *)t8);
    t44 = (~(t43));
    t45 = *((unsigned int *)t34);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t34) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t8) > 0)
        goto LAB28;

LAB29:    memcpy(t7, t48, 8);

LAB30:    t47 = (t0 + 2248);
    xsi_vlogvar_assign_value(t47, t7, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 26, t4, 26, t3, 32);
    t9 = (t0 + 1528U);
    t10 = *((char **)t9);
    memset(t12, 0, 8);
    t9 = (t12 + 4);
    t11 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 28);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 28);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t18 & 15U);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 15U);
    xsi_vlogtype_concat(t7, 32, 30, 2U, t12, 4, t8, 26);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB13;

LAB16:    t26 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t8) = 1;
    goto LAB21;

LAB20:    t33 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB21;

LAB22:    t38 = (t0 + 1528U);
    t39 = *((char **)t38);
    t38 = (t0 + 1368U);
    t40 = *((char **)t38);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t39, 32, t40, 32);
    t38 = ((char*)((ng2)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_lshift(t42, 32, t41, 32, t38, 32);
    goto LAB23;

LAB24:    t47 = (t0 + 1528U);
    t48 = *((char **)t47);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t7, 32, t42, 32, t48, 32);
    goto LAB30;

LAB28:    memcpy(t7, t42, 8);
    goto LAB30;

}


extern void work_m_00000000003673195551_1166250352_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000003673195551_1166250352", "isim/Top_tb_isim_beh.exe.sim/work/m_00000000003673195551_1166250352.didat");
	xsi_register_executes(pe);
}
