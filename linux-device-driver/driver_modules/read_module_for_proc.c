#include <linux/init.h>
#include <linux/module.h>
#include <linux/proc_fs.h>

MODULE_LICENSE("gpl");
MODULE_AUTHOR("SHAHRIAR HASAN MICKEY");
MODULE_DESCRIPTION("A DYNAMICALLY LOADABLE MODULE FOR LINUX ON THE /PROC DIRECTORY OF LINUX FILESYSTEMS TO READ THE CONTENT OF A VIRTUAL FILE AT RESIDING IN /PROC/ DIRECTORY");

static struct proc_dir_entry *custom_proc_node;


static int proc_module_read_init (void){
    printk("proc_module_read_init: entry\n");

    custom_proc_node = proc_create(
        "my_custom_driver",
        0,
        NULL,
        NULL
    );

    printk("proc_module_read_init: exit\n");

    return 0;
}

static void proc_module_read_exit (void){

    printk("proc_module_read_exit: entry\n");

    proc_remove(custom_proc_node);

    printk("proc_module_read_exit: entry\n");

}

module_init(proc_module_read_init);
module_exit(proc_module_read_exit);