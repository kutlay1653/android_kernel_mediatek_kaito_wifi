include $(srctree)/drivers/misc/mediatek/Makefile.custom

obj-$(CONFIG_MTK_TOUCHPANEL_DUMMY) += dummy.o
ifeq (generic, $(CUSTOM_KERNEL_TOUCHPANEL))
obj-$(CONFIG_MTK_TOUCHPANEL) += tpd_adc.o
obj-$(CONFIG_MTK_TOUCHPANEL) += tpd_adc_driver.o 
endif
