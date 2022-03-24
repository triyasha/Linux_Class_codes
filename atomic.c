#include<stdio.h>			// asking cpp (c pre processor) to header file in usr/include repository of user header files
#include "atomic.h"		// cpp to search header file called atomic.h in current folder

int main()
{
	atomic_t v;			//define v
	atomic_t u = ATOMIC_INIT(0);	//define u and initialize to 0

	atomic_set(&v, 4);		// v = 4 
	printf("%d\n", atomic_read(&v));

	atomic_add(2, &v);		//v=v+2 =6
	printf("%d\n", atomic_read(&v));

	atomic_inc( &v);			//v = v+1 = 7
	printf("%d\n", atomic_read(&v));

	atomic_sub(1, &v);		//v = v-1 = 6
	printf("%d\n", atomic_read(&v));

	atomic_dec(&v);			//v = v -1  = 5
	printf("%d\n", atomic_read(&v));

return 0;
}
