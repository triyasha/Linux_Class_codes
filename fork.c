#include<stdio.h>
#include <unistd.h>

int main(void)
{

printf("current process\n");
fork();
fork();
fork();
printf("LInux Process 2\n");
printf("Linux process 3\n");

while (1);
return 0;

}
