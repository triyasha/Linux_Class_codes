#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int sharedVar = 5;		//Our shared Variable

pthread_mutex_t my_mutex;		//Create Mutex

void *thread_inc(void *arg){
	pthread_mutex_lock(&my_mutex);  //take mutex
	sharedVar++;			// Critical Section
	pthread_mutex_unlock(&my_mutex);	//Release mutex
}

void *thread_dec(void *arg){
	pthread_mutex_lock(&my_mutex);
	sharedVar--;
	pthread_mutex_unlock(&my_mutex);
}

int main(){
	pthread_t thread1,thread2;

	pthread_mutex_init(&my_mutex, NULL);

	pthread_create(&thread1, NULL, thread_inc, NULL);
	pthread_create(&thread2, NULL, thread_dec, NULL);

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	printf("sharedVar = %d \n",sharedVar);
	return 0;

}
