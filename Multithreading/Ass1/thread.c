#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<fcntl.h>

void thread_read1()
{
	int fd;
	char buff[256];
	fd = open("demo.txt",O_RDONLY);
	int ret;
	int cap=0;
	while((ret = read(fd,buff,256))!=0)
	{
		while(ret !=0)
		{
			if(buff[ret] >= 'A' && buff[ret] <= 'Z')
			{
				cap++;

			}
			ret--;
		}
	}
	printf("total cap are %d ",cap);
}

void thread_read2()
{
	int fd;
	char buff[256];
	fd=open("demo.txt",O_RDONLY);
	int ret;
	int small=0;
	while((ret = read(fd,buff,256))!=0)
	{
		while(ret !=0)
		{
			if(buff[ret] >= 'a' && buff[ret] <= 'z')
			{
				small++;

			}
			ret--;
		}
	}
	printf("total small are %d ",small);

}
int main()
{
	pthread_t thread1, thread2;
	int ret1, ret2;

	ret1 = pthread_create(&thread1,NULL,thread_read1,NULL);
	ret2 = pthread_create(&thread2,NULL,thread_read2, NULL);

	pthread_join(thread1,NULL);
	pthread_join(thread2, NULL);
	return 0;
}
