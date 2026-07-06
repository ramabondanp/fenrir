#pragma once

#define DEVICE_NAME "X6871"

#define STAGE1_BASE 0xffff000050f838b4
#define STAGE2_BASE 0xffff000050f83c00
#define STAGE3_BASE 0xffff000050f83f00

#define PLATFORM_INIT_ADDR           0xffff000050f02444
#define NOTIFY_ENTER_FASTBOOT_ADDR   0xffff000050f0569c
#define NOTIFY_BOOT_LINUX_ADDR       0xffff000050f0cfb8

#define PRINTF_ADDR                  0xffff000050f686e0
#define VIDEO_PRINTF_ADDR            0xffff000050f3a948

#define FASTBOOT_OKAY_ADDR           0xffff000050f04fb0
#define FASTBOOT_FAIL_ADDR           0xffff000050f04f64
#define FASTBOOT_INFO_ADDR           0xffff000050f04f9c
#define FASTBOOT_REGISTER_ADDR       0xffff000050f04be8
#define FASTBOOT_PUBLISH_ADDR        0xffff000050f04cb4

#define PADDR_TO_KVADDR_ADDR         0xffff000050f54e34
#define KERNEL_ASPACE_ADDR           0xffff000050fea6b8

#define DETECT_KEY_ADDR              0xffff000050f1fea0
#define BOOT_MODE_ADDR               0xffff000050fe3238
#define BOOT_MODE_FASTBOOT           99
#define FASTBOOT_KEY_INDEX           1
