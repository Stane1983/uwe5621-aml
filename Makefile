all: modules

modules:
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNEL_SRC) M=$(M)/unisocwcn CFG_AML_WIFI_DEVICE_UWE5621=y UNISOC_64_BIT_RX_RECVBUF_LEN_CONFIG=32 modules
	$(CROSS_COMPILE)strip --strip-unneeded ${OUT_DIR}/$(M)/unisocwcn/uwe5621_bsp_sdio.ko
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNEL_SRC) M=$(M)/unisocwifi TARGET_BUILD_VARIANT=user modules
	$(CROSS_COMPILE)strip --strip-unneeded ${OUT_DIR}/$(M)/unisocwifi/sprdwl_ng.ko

modules_install:
	$(MAKE) INSTALL_MOD_STRIP=1 M=$(M)/unisocwcn -C $(KERNEL_SRC) modules_install
	mkdir -p ${OUT_DIR}/../vendor_lib/modules
	cd ${OUT_DIR}/$(M); find -name "*.ko" -exec cp {} ${OUT_DIR}/../vendor_lib/modules/ \; 
