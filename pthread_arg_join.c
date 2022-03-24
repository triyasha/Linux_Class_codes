#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>

static void* threadFunc(void *arg)
{
	char *s = (char *) arg;
	printf("%s\n", s);
	sleep(5);
	return (void*) strlen(s);
}

int main()
{
	pthread_t t1;
	void *res ;
	
	pthread_create(&t1, NULL, threadFunc,"Hello World");

	printf("Messages from amin\n");
	pthread_join(t1, &res);
	printf("Thread returned %ld\n", (long)res);
	exit(0);
}
