#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int i=0;
pthread_mutex_t mutex;
void* fun_one(void *ptr)
{
//	int i=0;
	pthread_mutex_lock(&mutex);
	printf("fun one is running %d*******************\n",i++);
	sleep(1);
	printf("fun one is end *******************%d\n",i);
	pthread_mutex_unlock(&mutex);
}
/*
void* fun_two(void *ptr)
{
	int j=0;
	while(1)
	{
	printf("fun two is running %d####################\n",j++);
	sleep(1);
	}
}
*/
void main()
{
pthread_t id,id1;
pthread_create(&id,NULL,&fun_one,NULL);
pthread_create(&id1,NULL,&fun_one,NULL);
pthread_join(id,NULL);
pthread_join(id1,NULL);
}
