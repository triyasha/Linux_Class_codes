#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>


struct my_thread
{
	int thread_id;;
	char mesg[1000];
	
};

void *PrintHello(void *threadobj)
{
	pthread_t thread_ID;
	struct my_thread *t1;
	t1 = (struct my_thread *)threadobj;
	thread_ID  =pthread_self();
	printf("\n Thread ID: %u", thread_ID);
	printf("\n %d Thread Message : %s\n", t1->thread_id, t1->mesg);
	
}

int main(void)
{
	pthread_t thread2, thread3, thread4, thread_ID;
	pthread_t_attr_set_stack
	int rc;
	struct my_thread t2, t3,t4;

	t4.thread_id = 4;
	strcpy(t4.mesg, "I am fourth THread\n");

	t2.thread_id = 2;
	strcpy(t2.mesg, "I am Second THread\n");
	
	t3.thread_id = 3;
	strcpy(t3.mesg, "I am Third THread\n");

	thread_ID = pthread_self();
	printf("\n MAIN THREAD id : %U", thread_ID);

	pthread_create(&thread4, NULL, PrintHello,(void *)&t4);
	pthread_create(&thread2, NULL, PrintHello,(void *)&t2);
	pthread_create(&thread3, NULL, PrintHello,(void *)&t3);

	printf("exit of main thread\n");  
	pthread_exit (NULL);
return 0;

}
