#include <linux/init.h>
#include <linux/module.h>
#include <linux/input.h>


static int hello_init(void)
{
	printk(KERN_ALERT "Hello, world\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world\n");
	return 0;
}


module_init(hello_init);
module_init(hello_exit);
