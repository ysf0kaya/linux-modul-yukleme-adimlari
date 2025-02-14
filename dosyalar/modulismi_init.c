// Initialization part of the kernel module

#include <linux/init.h>    // Needed for the macros 
#include <linux/kernel.h>  // Needed for pr_info() 
#include <linux/module.h>  // Needed by all modules 

extern void modulismi_exit(void); // Declaration of the exit function

static int __init modulismi_init(void)
{
    pr_info("Hello, world \n");
    return 0;
}

module_init(modulismi_init);
MODULE_DESCRIPTION("My kernel module - init part");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");
