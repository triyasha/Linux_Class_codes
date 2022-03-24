#include<stdio.h>
#include <unistd.h>

int main()
{
	//printf(" Execute 'ls' program \n");
	int ret;
	ret = execl("usr/bin/vim", "info.txt", 0);
	if(ret == -1)
	{
		printf("error %d\n", ret);
	}
}
