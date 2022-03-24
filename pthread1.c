#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>


//pthread_t tid;

void * thread1(void *arg)
{
	int i;
	for(i=0;i<1000;i++)
	printf("Thd of Con1 \n");
	
}

void * thread2(void *arg)
{
	int i;
	for(i=0;i<1000;i++)
	printf("Thd of Con2 \n");
	
}

int main(void)
{
	pthread_t p1,p2;
getchar();	
pthread_create(&p1, NULL, thread1, NULL);
pthread_create(&p2, NULL, thread2, NULL);
getchar();

printf("end of main thread\n");  // 1.joins given thread id with main process execution
			//2. forces process to wait for completion of thread in thread id
return 0;

}
