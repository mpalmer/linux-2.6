#
# Makefile for multifunction miscellaneous devices
#

obj-$(CONFIG_MFD_SM501)		+= sm501.o
obj-$(CONFIG_MFD_ASIC3)		+= asic3.o

obj-$(CONFIG_HTC_EGPIO)		+= htc-egpio.o
obj-$(CONFIG_HTC_PASIC3)	+= htc-pasic3.o

obj-$(CONFIG_MFD_T7L66XB)	+= t7l66xb.o
obj-$(CONFIG_MFD_TC6387XB)	+= tc6387xb.o
obj-$(CONFIG_MFD_TC6393XB)	+= tc6393xb.o

obj-$(CONFIG_MFD_WM8400)	+= wm8400-core.o
wm8350-objs			:= wm8350-core.o wm8350-regmap.o wm8350-gpio.o
obj-$(CONFIG_MFD_WM8350)	+= wm8350.o
obj-$(CONFIG_MFD_WM8350_I2C)	+= wm8350-i2c.o

obj-$(CONFIG_TWL4030_CORE)	+= twl4030-core.o

obj-$(CONFIG_MFD_CORE)		+= mfd-core.o

obj-$(CONFIG_MCP)		+= mcp-core.o
obj-$(CONFIG_MCP_SA11X0)	+= mcp-sa11x0.o
obj-$(CONFIG_MCP_UCB1200)	+= ucb1x00-core.o
obj-$(CONFIG_MCP_UCB1200_TS)	+= ucb1x00-ts.o

ifeq ($(CONFIG_SA1100_ASSABET),y)
obj-$(CONFIG_MCP_UCB1200)	+= ucb1x00-assabet.o
endif
obj-$(CONFIG_UCB1400_CORE)	+= ucb1400_core.o
