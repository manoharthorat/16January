#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int mystrchr(char * str1, char ch)
{
	int count = 0;
	while(*str1!='\0')
	{	
		count++;
		if(*str1==ch)
		{
			return count;
		}
		str1++;
	}
	return -1;
}
int main()
{
	char str1[50]="hello word";
	char ch = 'w';
	printf("position %d ",mystrchr(str1, ch));
	return 0;
}

/*
void strset(char * str, char ch, int no)
{
	int len = strlen(str);
	int len1=len - no;

	char * temp = str;
	str = str+len1;
	while(*str!= '\0')
	{	
		*str=ch;
		str++;
	}	
	printf("%s",temp);
}
	

int main()
{
	char str[50]="Hello word";
	char ch='q';
	int no=5;
	strset(str,ch,no);
return 0;
}
*/


/*
void strset(char * str, char ch, int no)
{
	char * temp = str;
	while(*str!= '\0' && no !=0)
	{	
		*str=ch;
		str++;
		no--;
	}	
	printf("%s",temp);
}
	

int main()
{
	char str[50]="Hello word";
	char ch='q';
	int no=5;
	strset(str,ch,no);
return 0;
}
*/
/*
void strset(char * str, char ch)
{
	char * temp = str;
	while(*str!= '\0')
	{	
		*str=ch;
		str++;
	}	
	printf("%s",temp);
}
	

int main()
{
	char str[50]="Hello word";
	char ch='q';
	strset(str,ch);
return 0;
}
*/


/*
void mystrstr(char * str1, char * str2)
{
	int count=0;
	char * temp=str2;
	while(*str1!='\0')
	{
		if(*str1==*str2)
		{
			str1++;
			str2++;	
			count++;
		}
		else if(temp==str2)
		{
			str1++;
			count++;
		}
		else
		{
			str2=temp;
		}
		if(*str2=='\0')
		{
			printf("string fount at position %d \n",(count - strlen(temp)));
			str2=temp;
		}
			
	}
		
}
int main()
{
	char str1[50]="TutorialpointTutorialpoint";
	char str2[50]="point";

	mystrstr(str1,str2);	

	
return 0;
}
*/

/*
//Word count
void word_count(char * str1, char * str2)
{
	char * t1=str1;
	char * t2=str1;
	char * t3=str1;
	char * temp=str2;
	char ch;
	int count =0;

	while(*str1!='\0')
	{
		t1=str1;
		while(*str1!= ' ' && *str1!='\0')
		{
			if(*str1==*str2)
			{
				str1++;
				str2++;
			}
			else if(str2==temp)
			{
				str1++;
			}
			else
			{
				str2=temp;
			}
			if(*str2=='\0')
			{
				count++;
				t2=str1;
				t2--;
				while(t1<=t2)
				{
					ch= *t1;
					*t1=*t2;
					*t2=ch;
					t1++;
					t2--;
				}
			}
		}
		str1++;
	}
	printf("Count is %d \n",count);
	printf("String is %s \n",t3);
}	

int main()
{
	char str1[100]="This is string is string the string string";
	char str2[50]="string";
	
	word_count(str1, str2);

	return 0;
}
*/

/*
//Word count
void word_count(char * str1, char * str2)
{
	int count=0;
	char * temp=str2;
	while(*str1!='\0')
	{
		if(*str1 ==*str2)
		{
			str1++;
			str2++;
		}
		else if(str2 == temp)
		{	
			str1++;
		}
		else
		{
			str2=temp;
		}
		if(*str2=='\0')
		{
			count ++;
		}
	}
	printf("Count is %d \n",count);

}
int main()
{
	char str1[100]="This is string is string the string string";
	char str2[50]="string";
	
	word_count(str1, str2);

	return 0;
}
*/

/*
//Remove the duplicate 
void remove_duplicate(char * str)
{
		char ascii[256]={'0'};
		char ch;
		char newstr[50];
		int i=0;
		while(*str!='\0')
		{
			ch= *str;
			if(ascii[ch]==0)
			{
				ascii[ch]=1;
				newstr[i]=ch;
				i++;
			}	
			str++;
		}
		newstr[i]='\0';
		printf("%s ",newstr);
}

int main()
{
	char str[50]="aaasdasdassdfgdfghdfgsdfasdfasf";
	remove_duplicate(str);
return 0;
}
*/


/*
//Plaindrome
int Palindrome(char * str)
{
	char * temp=str;
	while(*temp!='\0')
	{
		temp++;
	}
	temp--;
	while(str <= temp)
	{
		if(*str == *temp)
		{
			str++;
			temp--;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char str[50]="level ";
	int ret=Palindrome(str);
	if(ret ==1)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("Not Palindrome\n");
	}
	return 0;
}
*/

/*
char * ReverseWord(char * temp1)
{
	char * temp2=temp1;
	char * temp3=temp1;
	char * temp4=temp1;
	char ch;
	int count=0;
	while(*temp4!='\0')
	{
		
		temp2=temp1;
		count =0;
		while(*temp2 != ' ' && *temp2!='\0')
		{
			temp2++;
			count ++;
		}
		temp4=temp2;
		temp2--;
		if(count %2 ==0)
		{
		while(temp1<=temp2)
		{
			ch= *temp2;
			*temp2=*temp1;
			*temp1=ch;
			temp1++;
			temp2--;
		}
		}
		temp1=temp4+1;
	}

	return temp3;
		
}
int main()
{
	char str[50]="Hello Word hi are not he own";


	printf("Reverse %s",ReverseWord(str));

return 0;
}
*/

/*
void Reversefirstlastn(char * str1, int start, int last)
{
	char * temp=str1 + (last-1);
	char * temp1= str1 +(start-1);
	char ch;
	
	while(temp1<=temp)
	{
		ch=*temp1;
		*temp1=*temp;
		*temp=ch;
		temp1++;
		temp--;
	}

}

int main()
{
	char str1[50]="StringReverse";
	Reversefirstlastn(str1,3,8);
	printf("\nafter reverse %s",str1);
	return 0;
}
*/
/*
void Reverselastn(char * str1, int no)
{
	char * temp=str1;
	char ch;
	
	int len=strlen(str1);
	int len1=len-no;
	str1=str1+len1;
	while(*temp!='\0')
	{
		temp++;
	}
	temp--;

	while(str1<=temp)
	{
		ch=*str1;
		*str1=*temp;
		*temp=ch;
		str1++;
		temp--;
	}

}

int main()
{
	char str1[50]="StringReverse";
	Reverselastn(str1,5);
	printf("\nafter reverse %s",str1);
	return 0;
}
*/
/*
void Reversefirstn(char * str1, int no)
{
	char * temp=str1;
	char ch;
	while(*temp!='\0' && no !=0)
	{
		temp++;
		no--;
	}
	temp--;
	while(str1<=temp)
	{
		ch=*str1;
		*str1=*temp;
		*temp=ch;
		str1++;
		temp--;
	}

}

int main()
{
	char str1[50]="StringReverse";
	Reversefirstn(str1,5);
	printf("\nafter reverse %s",str1);
	return 0;
}
*/

/*
void Reverse(char * str1)
{
	char * temp=str1;
	char ch;
	while(*temp!='\0')
	{
		temp++;
	}
	temp--;
	while(str1<=temp)
	{
		ch=*str1;
		*str1=*temp;
		*temp=ch;
		str1++;
		temp--;
	}

}

int main()
{
	char str1[50]="my StRiNg";
	Reverse(str1);
	printf("after reverse %s",str1);
	return 0;
}
*/


/*
int mystrcmpi(char * str1, char * str2)
{
	while(*str1!='\0' && *str2!='\0')
	{
		if((*str1 == *str2) || (*str1-*str2) == 32  || (*str1 - *str2) == -32)
		{
			 str1++;
			 str2++;
		}
		else
		{
			return str1 - str2;
		}

	}
	if(*str1=='\0' && *str2=='\0')
	{
		return 0;
	}
}
int main()
{
	char str1[50]="my StRiNg";
	char str2[50]="my string";
	int ret=mystrcmpi(str1, str2);
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
int mystrcmp(char * str1, char * str2, int no)
{
	while(*str1!='\0' && *str2!='\0' && no !=0)
	{
		if(*str1!=*str2)
		{
			return str1- str2;
		}
		else
		{
			str1++;
			str2++;
			no--;
		}

	}
	if(no ==0 )
	{
		return 0;
	}
}
int main()
{
	char str1[50]="my string";
	char str2[50]="my string";
	int no=5;
	int ret=mystrcmp(str1, str2, no);
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
	char str2[50]="my string";
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

