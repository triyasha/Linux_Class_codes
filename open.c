#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()

{

int fd, len;
char write_buf[50] = "hi";

char read_buf[50];
fd = open ("linux_kernel1.txt", O_CREAT |O_RDWR, 777);


len = write (fd, write_buf, 50);
printf("return value from write opt = %d\n", len);

lseek (fd, 4, SEEK_CUR);

read(fd, read_buf , len);
printf("data from buffer (read optn) =  %s\n", read_buf);

close (fd);
return 0;
}










/*
	int fd1,fd2,fd3;
	fd1 = open("",), O_RDWR |
//printf("max fds: %d\n, getdtablesize();


// char vuf [300];
//int res;
//fd = open("max fds : %d\n", O_RDONLY | O_WRONLY, 777);
	fd1 = read("linux11.txt", O_RDONLY | O_WRONLY, 777);
*/
