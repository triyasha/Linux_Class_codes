#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char buff_comm[5];
	int a ;
	strcpy(buff_comm, "ls -l");
	
	printf(" system() library function uses fork() to vreate a child process \n");
	printf("Child process executes execl() which loads and run new program provided by system() argument\n");
	a = system(NULL);
	printf(" %d\n", a);
	return a;

}
