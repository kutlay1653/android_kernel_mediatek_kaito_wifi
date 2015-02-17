
include $(srctree)/drivers/misc/mediatek/Makefile.custom

# Module project related part

ifeq ($(CONFIG_MTK_CM3232),y)
obj-y   +=  als/cm3232/
obj-y   +=  alsps/cm3232/
endif
ifeq ($(CONFIG_MTK_APDS9930),y)
obj-y   +=  alsps/APDS9930/
endif
ifeq ($(CONFIG_MTK_CM36283),y)
obj-y	+=  alsps/cm36283/
endif
ifeq ($(CONFIG_MTK_TMD2771),y)
obj-y	+=  alsps/tmd2771/
endif

ifeq ($(CONFIG_MTK_ADXL345),y)
obj-y   +=  accelerometer/adxl345/
endif 
ifeq ($(CONFIG_MTK_KXTIK1004),y)
obj-y   +=  accelerometer/kxtik1004/
endif
ifeq ($(CONFIG_MTK_BMA050),y)
obj-y   +=  accelerometer/bma050/
endif
ifeq ($(CONFIG_MTK_LSM330),y)
obj-y   +=  accelerometer/lsm330/
endif

ifeq ($(CONFIG_MTK_MPU3000),y)
obj-y   +=  gyroscope/mpu3000/
endif
ifeq ($(CONFIG_MTK_L3GD20),y)
obj-y   +=  gyroscope/l3gd20/
endif
ifeq ($(CONFIG_MTK_MPU3050C),y)
obj-y   +=  gyroscope/mpu3050c/
endif

ifeq ($(CONFIG_MTK_BMM050),y)
obj-y	+=  magnetometer/bmm050/
endif
ifeq ($(CONFIG_MTK_AKM8963),y)
obj-y	+=  magnetometer/akm8963/
endif
ifeq ($(CONFIG_MTK_MMC3516X_AUTO),y)
obj-y   +=  magnetometer/mmc3516x_auto/
endif
ifeq ($(CONFIG_MTK_ST480_AUTO),y)
obj-y   +=  magnetometer/st480_auto/
endif

ifeq ($(CONFIG_MTK_MT5192),y)
obj-y   +=  matv/mt5192/
endif
ifeq ($(CONFIG_MTK_MT5193),y)
obj-y   +=  matv/mt5193/
endif

ifeq ($(CONFIG_MTK_CY8CTMA300),y)
obj-y   +=  touchpanel/cy8ctma300/
endif
ifeq ($(CONFIG_MTK_FT5606),y)
obj-y   +=  touchpanel/ft5606/
endif
ifeq ($(CONFIG_MTK_GT818B_FPGA),y)
obj-y   +=  touchpanel/GT818B-fpga/
endif
ifeq ($(CONFIG_MTK_GT911),y)
obj-y   +=  touchpanel/GT911/
endif
ifeq ($(CONFIG_MTK_GT9XX),y)
obj-y   +=  touchpanel/GT9XX/
endif
ifeq ($(CONFIG_MTK_TANGLEM32_16),y)
obj-y   +=  touchpanel/tangleM32_16/
endif

ifeq ($(CONFIG_MTK_KEYPAD),y)
obj-y   +=  keypad/
endif

ifneq ($(CONFIG_ARCH_MTK_PROJECT),)
ARCH_MTK_PROJECT := $(shell echo $(CONFIG_ARCH_MTK_PROJECT))
obj-y	+= core/
obj-y	+= dct/dct/
endif

obj-y   +=  barometer/BMP180/
obj-y	+=  camera/camera/
obj-y   +=  flashlight/constant_flashlight/
obj-y   +=  accdet/
obj-y   +=  jogball/evqwjn/
obj-y	+=  imgsensor/ov5648_mipi_raw/
obj-y   +=  imgsensor/ov8858_mipi_raw/
obj-y   +=  lcm/
obj-y   +=  leds/
obj-y   +=  sound/
obj-y	+=  vibrator/
obj-y   +=  wmt/

