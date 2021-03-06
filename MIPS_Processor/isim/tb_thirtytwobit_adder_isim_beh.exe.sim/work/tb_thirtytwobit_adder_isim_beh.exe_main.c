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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001488039415_3408347901_init();
    work_m_00000000003797814408_1949589896_init();
    work_m_00000000003797814408_1873982367_init();
    work_m_00000000003797814408_2725985637_init();
    work_m_00000000003797814408_2019904310_init();
    work_m_00000000003797814408_2302599706_init();
    work_m_00000000000901702981_2795895115_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000901702981_2795895115");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
