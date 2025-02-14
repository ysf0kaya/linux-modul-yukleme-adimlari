#include <linux/init.h>    // Needed for the macros 
#include <linux/kernel.h>  // Needed for pr_info() 
#include <linux/module.h>  // Needed by all modules 

static void __exit modulismi_exit(void)
{
    pr_info("Goodbye, world \n");
}

module_exit(modulismi_exit);
MODULE_DESCRIPTION("My kernel module - exit part");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");

