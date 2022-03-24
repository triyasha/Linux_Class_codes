#include <stdio.h>
#include<fcntl.h>

int main(){

	int fd1,fd2,fd3,fd;
	//fd1 = open ("linux.txt", O_WRONLY | O_CREAT|O_TRUNC, 0777);
	fd1 = open ("linuxnew.txt", O_WRONLY | O_CREAT|O_TRUNC, 0777);

//printf("fd1 = %d\n", fd1);
//printf("fd2 = %d\n", fd2);
//fd3 = dup (fd1);
fd3 = fcntl(fd1, F_DUPFD, 565);
//printf("fd3_dup of fd1= %d\n", fd3);

//fd2 = dup2(fd1, 4);

printf("duplicate of fd1 is fd3 = %d\n",fd3);
//printf("fp2 is our defined dup of fd1= %d\n", fd2);
close(fd3);
close(fd1);
close(fd2);

}
