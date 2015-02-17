#include <linux/types.h>
#include <cust_baro.h>
#include <mach/mt_pm_ldo.h>


/*---------------------------------------------------------------------------*/
static struct baro_hw cust_baro_hw = {
    .i2c_num = 2,
    .direction = 0,
    .power_id = MT65XX_POWER_NONE,  /*!< LDO is not used */
    .power_vol= VOL_DEFAULT,        /*!< LDO is not used */
    .firlen = 0, //old value 16                /*!< don't enable low pass fileter */
};
/*---------------------------------------------------------------------------*/
struct baro_hw* get_cust_baro_hw(void) 
{
    return &cust_baro_hw;
}
