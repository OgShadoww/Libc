int sys_exit(int status);
int sys_read(int fd, char *buff, int size);
int sys_write(int fd, char *buff, int size);
int sys_open(char *path, int flag, int mode);
int sys_close(int fd);
int my_strlen(char *buff);

int main() {
  char buff[128];
  int fd = sys_open("test.txt", 0, 0);
  if(fd == -1) {
    sys_write(1, "Error opening file", 20);
    sys_exit(1);
  }
  int n = sys_read(fd, buff, 5);
  buff[n] = '\0';
  sys_write(1, buff, my_strlen(buff));
  sys_close(fd);
  sys_exit(0);
}
