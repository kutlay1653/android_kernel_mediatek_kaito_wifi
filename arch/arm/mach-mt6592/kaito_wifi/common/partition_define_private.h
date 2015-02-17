#include "partition_define.h"
static const struct excel_info PartInfo_Private[PART_NUM]={
			{"preloader",262144,0x0, EMMC, 0,EMMC_PART_BOOT1},
			{"mbr",524288,0x0, EMMC, 0,EMMC_PART_USER},
			{"ebr1",524288,0x80000, EMMC, 1,EMMC_PART_USER},
			{"pro_info",3145728,0x100000, EMMC, 0,EMMC_PART_USER},
			{"nvram",5242880,0x400000, EMMC, 0,EMMC_PART_USER},
			{"protect_f",10485760,0x900000, EMMC, 2,EMMC_PART_USER},
			{"protect_s",10485760,0x1300000, EMMC, 3,EMMC_PART_USER},
			{"seccfg",262144,0x1d00000, EMMC, 0,EMMC_PART_USER},
			{"uboot",393216,0x1d40000, EMMC, 0,EMMC_PART_USER},
			{"bootimg",20971520,0x1da0000, EMMC, 0,EMMC_PART_USER},
			{"recovery",20971520,0x31a0000, EMMC, 0,EMMC_PART_USER},
			{"sec_ro",6291456,0x45a0000, EMMC, 4,EMMC_PART_USER},
			{"misc",524288,0x4ba0000, EMMC, 0,EMMC_PART_USER},
			{"logo",8388608,0x4c20000, EMMC, 0,EMMC_PART_USER},
			{"expdb",12451840,0x5420000, EMMC, 0,EMMC_PART_USER},
			{"android",1283457024,0x6000000, EMMC, 5,EMMC_PART_USER},
			{"cache",1073741824,0x52800000, EMMC, 6,EMMC_PART_USER},
			{"usrdata",1237319680,0x92800000, EMMC, 7,EMMC_PART_USER},
			{"bmtpool",22020096,0xFFFF00a8, EMMC, 0,EMMC_PART_USER},
 };

#ifdef  CONFIG_MTK_EMMC_SUPPORT
struct MBR_EBR_struct MBR_EBR_px[MBR_COUNT]={
	{"mbr", {1, 2, 3, 4, }},
	{"ebr1", {5, 6, 7, }},
};

EXPORT_SYMBOL(MBR_EBR_px);
#endif

