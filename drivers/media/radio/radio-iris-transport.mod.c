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
	{ 0xd4a02da6, "smd_close" },
	{ 0xcd21e4bd, "radio_hci_register_dev" },
	{ 0x25416bc4, "smd_disable_read_intr" },
	{ 0xee69c7bc, "smd_named_open_on_edge" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8cae3b, "kmalloc_caches" },
	{ 0x8949858b, "schedule_work" },
	{ 0x22739ccf, "kmem_cache_alloc_trace" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x5e226231, "smd_read" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x471c916d, "smd_read_avail" },
	{ 0xa3eb6ca7, "kfree_skb" },
	{ 0x193d12f2, "smd_write" },
	{ 0x67de060b, "radio_hci_unregister_dev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xb387171b, "radio_hci_recv_frame" },
	{ 0x1626540b, "skb_put" },
	{ 0x27e1a049, "printk" },
	{ 0x84ca80e3, "__alloc_skb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

