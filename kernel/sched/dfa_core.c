#include <linux/kernfs.h>
#include <linux/kernel.h>
#include <linux/printk.h>

#include "sched.h"

int flag[100];

bool firstUse = true;

void init_array(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		arr[i] = 0;
	}
}

void dfa_dummy(int i)
{
	if (firstUse) {
		init_array(flag, 100);
		char buf[] = KERN_INFO "dfa_dummy %i!";
		printk(buf, i);
		flag[i] = 1;
		firstUse = false;
	}
	else if (flag[i] == 0) {
		char buf[] = KERN_INFO "dfa_dummy %i!";
		printk(buf, i);
		flag[i] = 1;
	}
	
	// printk(KERN_INFO "dfa_dummy");

}
