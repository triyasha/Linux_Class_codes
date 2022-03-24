#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;	//declaring and initializing a condition variable
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;  	//DEclaring mutex

int done = 1;

void* foo(void *arg)
{
	char *str = (char *)arg;
	printf("Thread task called by = %s\n", str);
	pthread_mutex_lock(&lock);		// acquire a lock

	if(done == 1){
		// done = 2;		//wait on condition variable cond1
		printf("Waiting on condition variable cond1\n");
		pthread_cond_wait(&cond1, &lock);
	}
	else
	{
		printf("Signalling condition variable cond1\n");		//signal on condition variable cond1
		pthread_cond_signal(&cond1);
	}

	pthread_mutex_unlock(&lock);		//release lock

	printf("Returning thread \n");
	
return NULL;
}

int main()
{
	pthread_t tid1, tid2;
	pthread_create(&tid1, NULL, foo, "ThD one");		//create thread 1
	sleep(1);		// sleep for 1 s so that  th1 can get a chance to run first

	done = 2;
	pthread_create(&tid2, NULL, foo, "ThD two");
	pthread_join(tid2, NULL);

return 0;

}
