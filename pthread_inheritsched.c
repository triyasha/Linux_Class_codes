#include<pthread.h>
#include <stdio.h>

void* Proc(void* param)
{
	sleep(3);
	return 0;
}

int main( int arg, char *argv[])
{
	pthread_attr_t Attr;
	pthread_t Id;
	int err, info;

	pthread_attr_init(&Attr);

	pthread_attr_getinheritsched(&Attr, &info);
	switch(info)
	{
		case PTHREAD_INHERIT_SCHED:
			printf("\n SCHEd from its parent thd\n");
			break;

		case PTHREAD_EXPLICIT_SCHED:
			printf("\n EXPLICIT DEFINING own schd pol n pri\n");
			break;
	}
	
	pthread_attr_setinheritsched(&Attr, PTHREAD_EXPLICIT_SCHED);
	pthread_attr_getinheritsched(&Attr, &info);

	switch(info)
	{
		case PTHREAD_INHERIT_SCHED:
			printf("\n SCHEd from its parent thd\n");
			break;

		case PTHREAD_EXPLICIT_SCHED:
			printf("\n EXPLICIT DEFINING own schd pol n pri\n");
			break;
	}

	
	
	pthread_create(&Id, &Attr, Proc, NULL);

	return(0);
}
