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
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xce83a08b, "cdev_del" },
	{ 0x29679c49, "class_destroy" },
	{ 0x82ffa6bf, "device_destroy" },
	{ 0xbf933245, "device_create" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6c458acc, "__class_create" },
	{ 0xa810f6c0, "cdev_add" },
	{ 0x510e93c, "cdev_init" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x46867532, "__mutex_init" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8730c9b0, "smem_alloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x8c7a3757, "of_get_named_gpio_flags" },
	{ 0xa58da602, "of_gpio_named_count" },
	{ 0x7b94995a, "of_find_compatible_node" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x81eefda6, "mutex_unlock" },
	{ 0x8be3c739, "mutex_lock" },
	{ 0x588e8ef4, "dev_err" },
	{ 0xe3f0223, "wait_for_completion_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xad998077, "complete" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

