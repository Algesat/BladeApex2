cmd_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o := /home/algesat/kernel/scripts/gcc-wrapper.py /home/algesat/arm-eabi-4.7/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.bms-batterydata-qrd-4v35-2000mah.o.d  -nostdinc -isystem /home/algesat/arm-eabi-4.7/bin/../lib/gcc/arm-eabi/4.7/include -I/home/algesat/kernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/algesat/kernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -marm -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(bms_batterydata_qrd_4v35_2000mah)"  -D"KBUILD_MODNAME=KBUILD_STR(bms_batterydata_qrd_4v35_2000mah)" -c -o arch/arm/mach-msm/.tmp_bms-batterydata-qrd-4v35-2000mah.o arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.c

source_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o := arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.c

deps_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o := \
  include/linux/batterydata-lib.h \
    $(wildcard include/config/pm8921/bms.h) \
    $(wildcard include/config/qpnp/bms.h) \
  include/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \

arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o: $(deps_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o)

$(deps_arch/arm/mach-msm/bms-batterydata-qrd-4v35-2000mah.o):
