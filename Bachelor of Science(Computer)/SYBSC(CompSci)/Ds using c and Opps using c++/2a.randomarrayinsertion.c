/*
Q.1) Data Structures Using ‘C’ 
1. Sort a random array of n integers (accept the value of n from user) in ascending order
by using insertion sort algorithm.
a).Accept & Display Function [10]
b).Insertion Sort Function [5]
*/

#include <stdio.h>
#include <stdlib.h>
void generate(int *a,int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		a[i]=rand( )%100;
	}
}
void insert(int a[20], int n)
{
	int i,j,key;
	for(j=1;j<=n-1;j++)
	{
	key = a[j];
	for(i=j-1;i>=0;i--)
	{
		if(a[i]> key)
		{
		 	a[i+1]= a[i];
		}
		else
		{
		 	break;
		}
	}
	a[i+1]= key; 
	}
}
int main()
{
	int a[20],i,n;
	printf("How many numbers:");
	scanf("%d",&n);
	generate(a,n);
	printf("Random Numbers:\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d\n",a[i]);
	}
	insert(a,n);
	printf("Output is:\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d\n",a[i]);
	}
}

