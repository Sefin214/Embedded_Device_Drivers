/*Write a simple module which would print “I am in init module...” when module is inserted & “I am in cleanup module...” when module is removed?*/

#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static int __init first_init(void) 
{
	printk("I am in init module\n");
	return 0;
}

static void __exit first_exit(void)
{
	printk("I am in cleanup module\n");
}

module_init(first_init);
module_exit(first_exit);

