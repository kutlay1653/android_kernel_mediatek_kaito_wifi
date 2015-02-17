# drivers/video/mtk/Makefile
#
# Makefile for MT6516 video driver.
#
include $(srctree)/drivers/misc/mediatek/Makefile.custom

ifeq ($(CONFIG_CUSTOM_KERNEL_HDMI),nxp_tda19989)
	ccflags-y += 	-DHDMI_TDA19989
endif

ifeq ($(CONFIG_CUSTOM_KERNEL_HDMI),Sii8338)
	ccflags-y += 	-DMHL_SII8338
endif
obj-y	:= hdmitx.o debug.o  hdmitx_test.o




