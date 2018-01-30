#include<stdio.h>
#include<stdlib.h>
// Write a program which contains student structure (name, address, standard, division, marks of five subjects, name of parents, contact number)
// and pass that structure to a function and print that structure.




//FInd the differance between two dates

typedef struct 
{
	int day;
	int month;
	int year;
}date;

void difference(date * ptr1, date * ptr2)
{
	int daydiff=0, monthdiff=0,yeardiff=0;
	
	printf("First date %d %d %d\n",ptr1->day, ptr1->month, ptr1->year);
	printf("First date %d %d %d\n",ptr2->day, ptr2->month, ptr2->year);
	
	if(ptr1->day > ptr2->day)
	{
		daydiff = ptr1->day - ptr2->day;
	}
	else
	{
			daydiff =  ptr2->day-ptr1->day;
	}

	if(ptr1->month > ptr2->month)
	{
		monthdiff = ptr1->month - ptr2->month;
	}
	else
	{
			monthdiff =  ptr2->month - ptr1->month;
	}

	if(ptr1->year > ptr2->year)
	{
		yeardiff = ptr1->year -ptr2->year;
	}
	else
	{
		yeardiff = ptr2->year - ptr1->year;
	}

	printf("Difference is day = %d\tmonth =  %d\t year =  %d ",daydiff, monthdiff, yeardiff);
		
}
int main()
{
	date obj1, obj2;

	printf("Enter day \n");
	scanf("%d",&obj1.day);
	printf("Enter month \n");
	scanf("%d",&obj1.month);
	printf("Enter year \n");
	scanf("%d",&obj1.year);

	printf("Enter day \n");
	scanf("%d",&obj2.day);
	printf("Enter month \n");
	scanf("%d",&obj2.month);
	printf("Enter year \n");
	scanf("%d",&obj2.year);


	difference(&obj1, &obj2);
return 0;
}


/*
//Write a program which contains structure for maintaining information such as name of employee and its ID number.Accept that information from user and display it on screen.

typedef struct
{
	char name[50];
	int emp_id;
}student;

void Display(student * ptr)
{	
	for(int i=0;i<3;i++)
	{
		printf("name = %s \t id = %d \n ",ptr->name,ptr->emp_id);
		ptr++;
	}
}
int main()
{
	student std[3];
	int i=0;
	for(i=0; i< 3; i++)
	{
		printf("Enter the name");
		scanf("%s",std[i].name);
		printf("\nEnter the employee id");
		scanf("%d",&std[i].emp_id);
	}
	Display(std);
	return 0;
}
*/

/*
typedef struct 
{
	int day;
	int month ;
	int year;
}date;

#pragma pack(1)
typedef struct 
{
	char name_company[50];
	date foundation_date;
	char name_CTO[50];
	char name_project[50];
	char name_employee[50];

}company, *pcompany;

int main()
{
	date obj;
	company obj1;
	printf("size of %d \n",sizeof(obj));
	printf("size of %d \n",sizeof(obj1));
	
	return 0;
}
*/

