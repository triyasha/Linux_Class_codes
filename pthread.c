#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>


pthread_t tid;

void* thread1(void *arg)
{
	sleep(2);
	printf("newly created thread is executing\n");
	return NULL;
}

int main(void)
{
	 int ret = pthread_create(&tid, NULL, thread1, NULL);

if(ret)
	printf("Thread is not created\n");
else
	printf("Thread is created\n");
//sleep(2);
pthread_join(tid,NULL);  // 1.joins given thread id with main process execution
			//2. forces process to wait for completion of thread in thread id
return 0;

}
