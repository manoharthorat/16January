#include<stdio.h>
#include<pthread.h>
int counter;
pthread_mutex_t lock;

void printno()
{

	pthread_mutex_lock(&lock);
	counter++;
	printf("Counter is %d \n",counter);
	for(int i=0;i<0xffffffff;i++);
	printf("Counter is %d \n",counter);
	
	pthread_mutex_unlock(&lock);
	pthread_exit(NULL);

}

int main()
{
	pthread_t thread1, thread2;
	
	pthread_mutex_init(&lock,NULL);

	pthread_create(&thread1,NULL, printno, NULL);
	pthread_create(&thread2, NULL, printno, NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	
	pthread_mutex_destroy(&lock);

	return 0;
}
