#include <stdio.h>
#include <stdlib.h>

void buggy()
{
	int *intptr;
	//int i;
	intptr = (int *)malloc(sizeof(int));

		* intptr = 100;
		printf("Value at ptr intptr = %d\n",(*intptr));
		free(intptr);
		*intptr = 99;
	


}

int main(){
	buggy();
	return 0;
}

//$ export EF_PROTECT_BELOW=1
