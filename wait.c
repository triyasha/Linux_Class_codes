#include<stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	 pid_t pid1;

//printf("current process pid = %d\n", getpid());
pid1 = fork();

if(pid1 == 0)
{
	//sleep(5);
	execl("/bin/ls", "ls", NULL);		
	printf("child after 5 sec = %d\n", getpid());
	//printf("new child patrent process pid = %d\n", getppid());

}
else
{
	//sleep(5);
int pid2;	
	printf("parent pro id = %d\n", getpid());
	//printf("parents patrent process pid = %d\n", getppid());

	//sleep(2);
wait(NULL);
printf("parent saying child %d exited/ terminated normally \n",pid2);
printf("parent process pro id  = %d\n", getpid());

}

//while (1);
return 0;

}
