
# ccflags-y += -DDEBUG
# ccflags-y += -DKERNEL_VERSION_414
PWD := $(shell pwd)
CURFOLDER ?= $(pwd)

ccflags-y += -I$(srctree)/drivers/net/wireless/uwe5622/sprdwcn/include
ccflags-y += -I$(CURFOLDER)/include
#ccflags-y += -DUSE_DTS
ccflags-y +=  -Wno-uninitialized

ifneq ($(UNISOC_BSP_INCLUDE),)
ccflags-y += -I$(UNISOC_BSP_INCLUDE)
endif

#ccflags-y += -DWOBLE_TYPE="\"disable\""
ccflags-y += -DWOBLE_TYPE="\"demo\""
#ccflags-y += -DUNISOC_AMLOGIC_SUSPEND

# support assert bt reset
# ccflags-y += -DCP2_RESET_SUPPORT

sprdbt_tty-objs := \
	tty.o \
	rfkill.o \
	lpm.o \
	debug.o \
	sdio.o \
	sitm.o \
	hci.o \
	debug.o

obj-m += sprdbt_tty.o

