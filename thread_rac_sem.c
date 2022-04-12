#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>

int i=0;
sem_t sem;
void* fun_one(void *ptr)
{
//	int i=0;
	sem_wait(&sem);//it decrement the sem value
	printf("fun one is running %d*******************\n",i++);
	sleep(1);
	printf("fun one is end *******************%d\n",i);
	sem_post(&sem);//it increament the sem value
}

void main()
{
pthread_t id,id1;
sem_init(&sem,0,2);
pthread_create(&id,NULL,&fun_one,NULL);
pthread_create(&id1,NULL,&fun_one,NULL);
pthread_join(id,NULL);
pthread_join(id1,NULL);
}
