#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void fun()
{
	printf("This is 0 tread\n");
//	pthread_exit(0);
}
void fun1()
{
	printf("This is 1 tread\n");
//	pthread_exit(0);
}
void fun2()
{
	printf("This is 2 tread\n");
//	pthread_exit(0);
}
void fun3()
{
	printf("This is 3 tread\n");
//	pthread_exit(0);
}
void fun4()
{
	printf("This is 4 tread\n");
//	pthread_exit(0);
}

int main()
{
	pthread_t thread1, thread2, thread3;
	thread1 = pthread_create(&thread1,
				NULL,
				fun,
				NULL
				);
	thread2 = pthread_create(&thread2,
				NULL,
				fun1,
				NULL
				);

	thread3 = pthread_create(&thread3,
				NULL,
				fun2,
				NULL
				);


	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	pthread_join(thread3,NULL);
	pthread_exit(0);
	return 0;
}
