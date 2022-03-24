#include<stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	printf("file name = %s\n", argv[0]);
	printf("Total number of arguments : %d", argc);
	printf("\n Argument passed:\n");
execl("/home/triyasha/Desktop/Prac/Linux", "Linux", "Program", NULL);
for(i=1; i<argc;i++)
{
	printf("%s ", argv[i]);
printf("\n");
} 


}
