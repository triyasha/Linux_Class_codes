#include<stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	 pid_t c1,c2;

c1 = fork();

if(c1 == 0)
{		
	printf("child 1 pid = %d\n", getpid());

}
else
{
	c2  = fork();
	if(c2 == 0)
	{		
		printf("child 2 pid = %d\n", getpid());

	}
	else
	{
		wait();
		printf("parent of 1 and 2= %d\n", getpid());
	}

}
return 0;

}
