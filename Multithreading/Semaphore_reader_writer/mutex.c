#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
#include<unistd.h>


/*
pthread_t tid[2];
int counter;

void * Do_Some_Thing(void * arg)
{
	unsigned long i =0;
	counter = counter +1;
	printf("\n Job started %d \n",counter);

	for(i=0;i<(0xFFFFFFFF); i++)
	{
		;
	}
	printf("\nJob finished %d \n",counter);

	return NULL;
}

int main(void)
{
	int i=0; int err;
	while(i < 2)
	{
		err = pthread_create(&(tid[i]), NULL, Do_Some_Thing,NULL);
		if(err != 0)
		{
			printf("\nCan't create thread %s\n",strerror(err));
		}
		i++;
	}

	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);
	return 0;
}
*/

pthread_t tid[2];
int counter;
pthread_mutex_t lock;

void * Do_Some_Thing(void * arg)
{
	pthread_mutex_lock(&lock);

	unsigned long i=0;
	counter = counter +1;
	printf("\nJob started %d \n",counter);

	for(i=0;i<(0xFFFFFFF); i++) ;
	printf("\nJob is finised %d \n",counter);
	pthread_mutex_unlock(&lock);
	return NULL;
}

int main(void)
{
	int i=0; 
	int err;
	if(pthread_mutex_init(&lock, NULL) != 0)
	{
		printf("\nMutex initialization failed\n");
		return 1;
	}

	while( i < 2)
	{
		err = pthread_create(&(tid[i]), NULL, &Do_Some_Thing, NULL);
		i++;
	}

	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);

	pthread_mutex_destroy(&lock);

return 0;
}









