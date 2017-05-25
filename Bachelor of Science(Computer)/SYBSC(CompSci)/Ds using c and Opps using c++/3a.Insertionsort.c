/*
Q.1) Data Structures Using ‘C’ 
1. Read the data from the file “employee.txt” and sort on age using insertion sort.
a)Reading & Display the file [10]
b)Insertion sort Function [5]
*/
#include <stdio.h>
#include <string.h>
typedef struct emp
{      
	int age;
	char name[30];
	float salary;
}emp;

emp e[30];

void display(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d %s %.2f \n",e[i].age,e[i].name,e[i].salary);
	}
}

void insertion(int n)
{
	int i,sp,key;
	emp temp;
	for(i=1;i<n;i++)
	{
		temp=e[i];
		key=e[i].age;
		for(sp=i-1;((e[sp].age>key)&&(sp>=0));sp--)
		{
			e[sp+1]=e[sp];	
		}
		e[sp+1]=temp;
	}
}

int main()
{
	int n,i=0;
	FILE*fp;
	
	fp=fopen("test.txt","r");
	while(!feof(fp))
	{
		fscanf(fp,"%d %s %f",&e[i].age,e[i].name,&e[i].salary);
		i++;
	}
	i--;
	n=i;
	printf("\nBefore Sorting\n");
	display(n);
	insertion(n);
	printf("\nAfter Sorting\n");
	display(n);
	return 0;
}
