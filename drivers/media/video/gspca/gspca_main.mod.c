#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15865c53, "module_layout" },
	{ 0x8cae3b, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xccfc9a09, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0x8547f2a7, "usb_kill_urb" },
	{ 0x94e6ef51, "__video_register_device" },
	{ 0x81eefda6, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xf25131ca, "mutex_lock_interruptible" },
	{ 0x46867532, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x5f11a1cd, "video_unregister_device" },
	{ 0xbc9d946a, "usb_set_interface" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8be3c739, "mutex_lock" },
	{ 0x99aed69a, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xabae8f7d, "vm_insert_page" },
	{ 0xa5b309f7, "module_put" },
	{ 0x61de9af2, "usb_submit_urb" },
	{ 0x3cb6ce6c, "video_devdata" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x4f225224, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xc29bb99f, "usb_clear_halt" },
	{ 0xb9c1c64d, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x22739ccf, "kmem_cache_alloc_trace" },
	{  0xf1338, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd637ddfd, "input_unregister_device" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9669e070, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9441f54e, "vmalloc_to_page" },
	{ 0xa23ba98, "usb_alloc_coherent" },
	{ 0xf62d5147, "dev_get_drvdata" },
	{ 0x33d55de8, "usb_free_urb" },
	{ 0xedc556df, "video_ioctl2" },
	{ 0xdb8ba889, "try_module_get" },
	{ 0xd94c95f3, "usb_alloc_urb" },
	{ 0x4cdb3178, "ns_to_timeval" },
	{ 0x6a57e741, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FFBCF4BD2374601FE6CCFCE");
