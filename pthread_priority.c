#include<pthread.h>
#include <stdio.h>

void *my(void *i)
{
	printf("\n I am in %d THread\n ", (int *)i);
}

main(){
	pthread_t tid;
	struct sched_param param;
	int priority, policy, ret;
	ret = pthread_getschedparam(pthread_self(), &policy, &param);
	
	printf("\n -------------MAIN THREAD----------------\n Policy : %d \t Priority : %d \n", policy, param.sched_priority);
	
	policy = SCHED_FIFO;
	param.sched_priority = 3;
	pthread_setschedparam(pthread_self(), policy, &param);
	if(ret != 0)
		perror("getschedparam");

	pthread_getschedparam(pthread_self(), &policy, &param);
	if(ret != 0)
		perror("getschedparam");

	printf("\n -------------MAIN THREAD----------------\n Policy : %d \t Priority : %d \n", policy, param.sched_priority);


}


 
