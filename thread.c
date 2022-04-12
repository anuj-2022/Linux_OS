#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void* fun_call(void *ptr)
{
	int i=0;
	for(i=0;i<=10;i++)
	{
	printf("in running process %d\n",i);
	sleep(1);
	}
}

void main()
{
pthread_t id;
pthread_create(&id,NULL,&fun_call,NULL);
pthread_join(id,NULL);
}
