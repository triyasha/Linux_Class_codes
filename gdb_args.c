#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i;
	printf(" \n File name : %s\n", argv[0]);
	printf("\n Total Number of arguments :  %d", argc);
	printf("\n Arguments Passed: ");
	for(i = 0; i< argc; i++)
		printf("%s ", argv[i]);
	printf("\n");
}
