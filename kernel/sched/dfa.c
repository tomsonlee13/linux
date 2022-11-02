/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include <linux/syscalls.h>
#include <linux/mm.h>
#include <linux/anon_inodes.h>
#include <linux/bitmap.h>
#include <linux/bitops.h>
#include <linux/atomic.h>
#include <linux/kvm_host.h>
#include <uapi/linux/sched/types.h>
#include <linux/file.h>
#ifdef CONFIG_X86_64
#include <asm/apic.h>
#endif

#include <trace/events/sched.h>

#include "sched.h"
#include "kernfs-internal.h"

#define __INCLUDE_KERNEL_SCHED_DFA
#include "dfa_uapi.h"
#include "dfa.h"

