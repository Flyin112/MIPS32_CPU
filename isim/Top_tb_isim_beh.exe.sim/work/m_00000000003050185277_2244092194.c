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
static const char *ng0 = "F:/Documents/Verilog HDL/lab2/Ctr.v";
static unsigned int ng1[] = {32U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {37U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {38U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {39U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {319U, 63U};
static unsigned int ng19[] = {2303U, 63U};
static unsigned int ng20[] = {2815U, 63U};
static unsigned int ng21[] = {191U, 63U};



static void Always_36_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 12, 12, 2U, t7, 6, t6, 6);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 12, t5, 12);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 12, t2, 12);
    if (t8 == 1)
        goto LAB9;

LAB10:    t5 = ((char*)((ng7)));
    t11 = xsi_vlog_unsigned_case_xcompare(t4, 12, t5, 12);
    if (t11 == 1)
        goto LAB11;

LAB12:    t6 = ((char*)((ng9)));
    t12 = xsi_vlog_unsigned_case_xcompare(t4, 12, t6, 12);
    if (t12 == 1)
        goto LAB13;

LAB14:    t7 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_xcompare(t4, 12, t7, 12);
    if (t13 == 1)
        goto LAB15;

LAB16:    t9 = ((char*)((ng13)));
    t14 = xsi_vlog_unsigned_case_xcompare(t4, 12, t9, 12);
    if (t14 == 1)
        goto LAB17;

LAB18:    t10 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_xcompare(t4, 12, t10, 12);
    if (t15 == 1)
        goto LAB19;

LAB20:    t16 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_xcompare(t4, 12, t16, 12);
    if (t17 == 1)
        goto LAB21;

LAB22:    t18 = ((char*)((ng17)));
    t19 = xsi_vlog_unsigned_case_xcompare(t4, 12, t18, 12);
    if (t19 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 12, t2, 12);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 12, t2, 12);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 12, t2, 12);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_xcompare(t4, 12, t2, 12);
    if (t8 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(151, ng0);

LAB67:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);

LAB36:    xsi_set_current_line(49, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB37:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB54;

LAB55:
LAB57:
LAB56:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);

LAB58:    goto LAB35;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    goto LAB7;

LAB15:    goto LAB7;

LAB17:    goto LAB7;

LAB19:    goto LAB7;

LAB21:    goto LAB7;

LAB23:    xsi_set_current_line(86, ng0);

LAB62:    xsi_set_current_line(87, ng0);
    t20 = ((char*)((ng3)));
    t21 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    goto LAB35;

LAB25:    xsi_set_current_line(99, ng0);

LAB63:    xsi_set_current_line(100, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng8)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    goto LAB35;

LAB27:    xsi_set_current_line(112, ng0);

LAB64:    xsi_set_current_line(113, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    goto LAB35;

LAB29:    xsi_set_current_line(125, ng0);

LAB65:    xsi_set_current_line(126, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    goto LAB35;

LAB31:    xsi_set_current_line(138, ng0);

LAB66:    xsi_set_current_line(139, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    goto LAB35;

LAB38:    xsi_set_current_line(58, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB58;

LAB40:    xsi_set_current_line(59, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB58;

LAB42:    xsi_set_current_line(60, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB58;

LAB44:    xsi_set_current_line(61, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB58;

LAB46:    xsi_set_current_line(62, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB58;

LAB48:    xsi_set_current_line(63, ng0);
    t5 = ((char*)((ng14)));
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB58;

LAB50:    xsi_set_current_line(65, ng0);

LAB59:    xsi_set_current_line(66, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    goto LAB58;

LAB52:    xsi_set_current_line(70, ng0);

LAB60:    xsi_set_current_line(71, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng16)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    goto LAB58;

LAB54:    xsi_set_current_line(75, ng0);

LAB61:    xsi_set_current_line(76, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 4, 0LL);
    goto LAB58;

}


extern void work_m_00000000003050185277_2244092194_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000003050185277_2244092194", "isim/Top_tb_isim_beh.exe.sim/work/m_00000000003050185277_2244092194.didat");
	xsi_register_executes(pe);
}
