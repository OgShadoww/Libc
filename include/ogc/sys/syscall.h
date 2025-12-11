#ifndef SYSCALL_H
#define SYSCALL_H

int sys_write(int fd, char *buffer, int size);
int sys_read(int fd, char *buffer, int size);
int sys_open(char *path);
int sys_close(int fd);
int sys_exit(int flag);
int sys_nanosleep(int second);


#endif
