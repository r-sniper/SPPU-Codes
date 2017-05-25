/*
Q.1) Data Structures Using ‘C’
1. Read the data from the file “employee.txt” and sort on age using Bubble sort.
a)Reading the contents of File & Display Function [10]
b)Bubble sort Function [5]
*/
#include<stdio.h>
void bubblesort(int a[20],int n);
int a[20],i,temp,n,flag=0;
int main()
{
	printf("\n Enter no of elements \n");
	scanf("%d",&n);
	printf("\n Enter the no \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("\n Unsorted elements \n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	printf("\n");
	
	bubblesort(a,n);

	printf("\n Sorted elements \n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
}

void bubblesort(int a[20],int n)
{
	int i,pass,temp;
	for(pass=1;pass<=n-1;pass++)
	{
		flag=0;
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
}