#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

//added in lab3
#include "vm/page.h"

#include "threads/thread.h"
bool handle_mm_fault(struct vm_entry *vme);
tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);

#endif /* userprog/process.h */
