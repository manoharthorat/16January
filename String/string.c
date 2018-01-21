#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
//Write a program which accept two strings from user and compare two strings. If both strings are equal then return 0 otherwise return difference
// between first mismatch character (Implement strcmp()).

int mystrcmp(char * str1, char * str2)
{
	while(*str1!='\0' && *str2!='\0')
	{
		if(*str1!=*str2)
		{
			return str1- str2;
		}
		else
		{
			str1++;
			str2++;
		}

	}
	if(*str1=='\0' && *str2=='\0')
	{
		return 0;
	}
}
int main()
{
	char str1[50]="my string";
	char str2[50]="my string ";
	int ret=mystrcmp(str1, str2);
	if(ret==0)
	{
		printf("string equal");
	}
	else
	{
		printf("string not equal");
	}
	return 0;
}
*/

/*
//Append second string after first
void appendstring(char * str1, char * str2)
{
	while(*str1!='\0')
	{
		str1++;
	}
	while(*str2!='\0')
	{
		*str1=*str2;
		str1++;
		str2++;
	}
	*str1=='\0';
}

int main()
{
	char str1[50]="this is first string";
	char str2[50]="this is second string";
	appendstring(str1,str2);
	printf("after append \n%s",str1);
return 0;
}
*/
/*
void mystrcpylastno(char * str1, char * str2, int no)
{
	int len= strlen(str1);
	int len1=len -no;
	while(*str1!='\0' && len1!=0)
	{
		str1++;
		len1--;
	}
	while(*str1!='\0')
	{
		*str2=*str1;
		str1++;
		str2++;
	}
	*str2='\0';
}
int main()
{
	char str1[50]="Copy the string in to another string";
	char str2[50];
	int no=9;
	mystrcpylastno(str1,str2,no);
	printf("%s",str2);
	
	return 0;
}
*/

/*
// Write a program which accept string from user and copy first N charaters into some destination string (Implement strncpy()).
void mystrcpyno(char * str1, char * str2, int no)
{
	while(*str1!='\0' && no!=0)
	{
		*str2=*str1;
		str1++;
		str2++;
		no--;
	}
	*str2='\0';
}

int main()
{
	char str1[50]="Copy the string in to another string";
	char str2[50];
	int no=9;
	mystrcpyno(str1,str2,no);
	printf("%s",str2);
	
	return 0;
}
*/
/*
//Write a program which accept string from user and copy that string into some another string
void mystrcpy(char * str1, char* str2)
{
	while(*str1!='\0')
	{
		*str2=*str1;
		str1++;
		str2++;
	}
	*str2='\0';
}
int main()
{
	char str1[50]="Copy the string";
	char str2[50];
	mystrcpy(str1,str2);
	printf("%s",str2);
	return 0;
}
*/

/*
// Write a program to check whether given strings are Anagram strings or not.
int sort(char *);
void Anagram(char * str1, char * str2)
{
	sort(str1);
	sort(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("anagram");
	}
	else
	{
		printf("not anagram");
	}
}

int sort(char * str1)
{
	char temp;
	int len=strlen(str1);
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(str1[i] > str1[j])
			{
				temp=str1[i];
				str1[i]=str1[j];			
				str1[j]=temp;
			}
		}
	}
}
int main()
{
	char str1[50]="abccd";
	char str2[50]="cbcdaa";
	Anagram(str1,str2);
	return 0;
}
*/

/*
//Write a program which accept sentence from user and position from user and print the word at that position.
void fun(char * str, int no)
{
	int count=1;
	char * temp=str;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			count++;
		}
		else if(count ==no)
		{
			while(*str!=' ' && *str!='\0')
			{
				printf("%c",*str);
				str++;
			}
			break;
		}
		str++;
	}
}
int main()
{
	char str[50]="is my he she";
	int no=3;
	fun(str,no);
	return 0;
}
*/

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

