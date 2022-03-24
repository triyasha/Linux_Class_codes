#include <stdio.h>
#include <stdlib.h>


void callback1(void)
{
	printf("callback1 func called\n");
}
void callback2(void)
{
	printf("callback2 func called\n");
}
void callback3(void)
{
	printf("callback3 func called\n");
}


int main()
{
printf("registr callback1\n");
atexit(callback1);

printf("registr callback2\n");
atexit(callback2);

printf("registr callback3\n");
atexit(callback3);

printf("main()...exiting now\n");

_exit(0);

}

