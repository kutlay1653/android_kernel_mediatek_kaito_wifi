#$(call all-subdir-src-or-makefile)

include $(srctree)/drivers/misc/mediatek/Makefile.custom

obj-y   += kernel/
obj-y   += ssw/

obj-y   +=  keypad/ #for Kernel HAL Structure
obj-y   +=  mtprof/
obj-y   +=  clock/
obj-y   +=  sched/
obj-y   +=  mmp/
obj-y   +=  xlog/
obj-y   +=  uart/
obj-y   +=  eint/
obj-y   +=  boot/
obj-$(CONFIG_ZRAM) +=  mlog/
obj-y   +=  gpu/
obj-y	+=  gpio/
obj-y   +=  aee/
obj-y   +=  wdk/
obj-y   +=  ion_drv/
obj-y   +=  video/
obj-y   +=  m4u/
obj-y   +=  sync/
obj-y   +=  pmic_wrap/
obj-$(CONFIG_MTK_FLIPER)   +=  fliper/
obj-y   +=  usb20/
obj-y   +=  usb11/
obj-y   +=  mu3d/
obj-$(CONFIG_MTK_SYSTRACKER) 	+=  systracker/

obj-$(CONFIG_MTK_XHCI)   +=  xhci/
obj-y   +=  eint/
obj-$(CONFIG_MTK_BTIF)   +=  btif/


obj-$(CONFIG_MD32_SUPPORT)   +=  md32_wdt/
obj-y   +=  videocodec/
obj-y   +=  dum-char/
# ifneq ($(CONFIG_MTK_FPGA),y)
ifeq ($(CONFIG_MTK_RTC),y)
obj-y   +=  rtc/
endif
obj-y   +=  ccci/
obj-y   +=  dual_ccci/

ifeq ($(CONFIG_MTK_EEMCS_DEVICES), y)
obj-y   +=  eemcs/
endif

obj-y   +=  fmradio/
obj-y   +=  gps/
obj-y   +=  hwmon/
obj-y   +=  mhl/
obj-y   +=  almk/


obj-y   +=  bthid/

ifeq ($(CONGIG_MTK_WFD_SUPPORT),y)
obj-y  += uibc/
endif

obj-y   +=  ccmni/

obj-y   +=  emd_ctl/


# gator-driver is not custom-release and will be removed
obj-$(CONFIG_GATOR_DRIVER)	+= $(call all-subdirs-with-makefile,gator-driver)


obj-y   +=  leds/
obj-y   +=  auxadc/
obj-y   +=  mmp/
obj-y	+=  ram_console/
obj-y   +=  thermal/
obj-y   +=  evdo_support/
obj-$(CONFIG_MTK_IN_HOUSE_TEE_SUPPORT)  +=  trustzone/
obj-y   +=  wmt_ccci/

obj-y   += power/

subdir-ccflags-y += -D MTK_WCN_WMT_STP_EXP_SYMBOL_ABSTRACT
subdir-ccflags-y += -D MTK_WCN_REMOVE_KERNEL_MODULE
subdir-ccflags-y += -D MTK_CUSTOM_PATH=$(srctree)/drivers/misc/mediatek/

obj-y   +=  conn_soc/
obj-y   +=  common_detect/

obj-y += conn_md/

ifeq ($(CONFIG_MTK_NFC_SUPPORT),y)
obj-y	+= nfc/
endif

#ifeq ($(CONFIG_MTK_WIFI),m)
#obj-y   +=  conn_soc/
#endif

obj-$(CONFIG_MTK_EXTMEM) +=  exm/

obj-y   +=  accdet/
obj-y   +=  vibrator/
obj-y	+=  pwm/
obj-y   +=  freqhopping/
obj-$(CONFIG_MTK_ETM) += etm/
obj-y   +=  dbg_dump/
obj-y	+=  misc_via/
# endif#!CONFIG_MTK_FPGA
obj-$(CONFIG_MTK_SCHED_CMP_POWER_AWARE_CONTROLLER) +=  pa/

obj-y   += imgsensor/src/
obj-y   += dispsys/
obj-y   += hibcore/
obj-y   +=  devapc/
obj-y   +=  devinfo/
obj-y   +=  hdmitx/
obj-y   +=  i2c/
obj-y   +=  jpeg/
obj-y   +=  masp/
obj-y   +=  mdrvb/
obj-y   +=  mjc/
obj-y   +=  mmc-host/
obj-y   +=  mrdump/
#obj-$(CONFIG_MTK_ETM) += mt_etm/
obj-y   +=  nand/
obj-y   +=  pmt/
obj-y   +=  power_gs/
obj-y   +=  power-loss-test/
obj-y   +=  selinux_warning/
obj-y   +=  smi/
obj-y   +=  sound/
obj-y   +=  spi/
obj-y   +=  touchpanel/
obj-y   +=  wdt/

# MTK PASR SW flow
obj-$(CONFIG_MTKPASR)	+= mtkpasr/
obj-y   +=  debug_util/
