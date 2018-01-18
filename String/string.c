#include<stdio.h>
#include<stdlib.h>

//Write a program which accept sentence from user and position from user and print the word at that position.

void fun(char * str, int no)
{
	char * temp=str;
	while(*str!='\0')
	{
		while(*str!=' ' && no !=0)	
		{
			if(*str==' ')
			{
				no--;
				if(*str==' ')
				{
					str++;
					continue;
				}
			}
			str++;
		}
	}
}
int main()
{
	char str[50]="is my he she";
	int no=3;
	fun(str,no);
	return 0;
}


/*
//Write a program which accept sentence from user and print last word from that sentense
void fun(char * str)
{
	int i=0;
	char * temp=str;
	char str1[50];
	while(*str!='\0')
	{
		if(*str==' ')
		{
			temp=str;
		}
		str++;
	}
	temp++;
	while(*temp!='\0')
	{
		str1[i]=*temp;
		i++;
		temp++;		
	}
	str1[i]='\0';
	printf("%s",str1);
}
int main()
{
	char str1[50]="In my company";
	fun(str1);
	return 0;
}
*/
/*
//Print no. of even and odd lenght of words.
void fun(char * str)
{
	int even=0,odd=0,count=0;
	while(*str!='\0')
	{
		while(*str!=' ' && * str!='\0')
		{
			count++;
			str++;	
		}
		if(count%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		str++;
	}
	printf("even %d odd %d",even,odd);
}
int main()
{
	char str1[50]="In my company";
	fun(str1);
	return 0;
}

*/
/*
//Write a program which accepts a string from user which contains a characters fron b to y
void fun(char * str)
{
	char str1[50];
	int i=0;
	while(*str!='\0')
	{
		if(*str> 'b' && *str <'z')
		{
			str1[i]=*str;
			i++;
			str++;
		}
		else
		{
			str++;
		}
	}
	str1[i]='\0';
	printf("%s",str1);
}
int main()
{
	char str[50]="mn jn kn kazfd";
	fun(str);
	return 0;
}
*/

