#include<stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	 pid_t pid1;
pid1 = fork();

if(pid1 == 0)
{
	//sleep(5);
	execl("/bin/ls", "ls", NULL);		

}
else
{
int pid2;	
wait(NULL);
 printf("child Complete");
}

//while (1);
return 0;

}
