/*
Q.1) Data Structures Using ‘C’ 
1. Read the data from the file “employee.txt” and sort on names in alphabetical order (use
strcmp) using bubble sort
a).Reading the contents of File & Display Function [10]
b).Bubble sort Function [5]
*/
#include <stdio.h>
#include <string.h>

typedef struct emp
{      
int en;
char s[30];
float sal;
} 
emp;



void bubblesort(emp e[30],int n)
{
int i,j;
emp temp;
printf("\n unsorted data");
for(i=0;i<n;i++)
{
printf("\n %d %s %f",e[i].en,e[i].s,e[i].sal);
}

for(i=1;i<=n-1;i++)   
{
for(j=0;j<n-1;j++)
{
if(e[j].en>e[j+1].en)
{
temp.en=e[j].en;
e[j].en=e[j+1].en;
e[j+1].en=temp.en;


strcpy(temp.s,e[j].s);
strcpy(e[j].s,e[j+1].s);
strcpy(e[j+1].s,temp.s);

temp.sal=e[j].sal;
e[j].sal=e[j+1].sal;
e[j+1].sal=temp.sal;
}
}
}
} 

int main()
{
int n,i=0;
FILE*fp;
emp e[30];

fp=fopen("test.txt","r");
	while(!feof(fp))
	{
		fscanf(fp,"%d %s %f",&e[i].en,e[i].s,&e[i].sal);
		i++;
	}
i--;
n=i;
bubblesort(e,n);
printf("\n sorted data");
	for(i=0;i<n;i++)
	{
		printf("\n %d %s %f",e[i].en,e[i].s,e[i].sal);
	}
return 0;

}

