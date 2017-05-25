/*
2. Write a C program that accepts a directed graph as an adjacency matrix and converts it
to adjacency list representation Implement functions to print out degree of any vertex i(take i as
parameter to the function) from adjacency list
a)Read a graph as adjacency Matrix [5]
b)Creation of adjacency List & Display [7+3]
c)Calculate out degree of any vertex i [10]
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int vertex;
  struct node *next;
}NODE;
NODE *list[10];

void createmat(int m[10][10],int n)
{
  int i,j;
  char ans;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
      m[i][j]=0;
      if(i!=j)
      {
        printf("\nIs there an edge between %d->%d (1/0):",i+1,j+1);
        scanf("%d",&m[i][j]);
      }
    }
}

void dispmat(int m[10][10],int n)
{
  int i,j;
  printf("\nThe adjacency matrix is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      printf("%5d",m[i][j]);
    printf("\n");
  }
}

void createlist(int m[10][10],int n)
{
  int i,j;
  struct node *temp,*newnode;
  for(i=0;i<n;i++)
  {
    list[i]=NULL;
    for(j=0;j<n;j++)
    {
      if (m[i][j]==1)
      {
        newnode=(NODE *)malloc(sizeof(NODE));
        newnode->vertex=j+1;
        newnode->next=NULL;

        if(list[i]==NULL)
          list[i]=temp=newnode;
        else
        {
          temp->next=newnode;
          temp=newnode;
        }
      }
    }
  }
}

void displist(int n)
{
  struct node *temp;
  int i;
  printf("\nThe adjacency list is:\n"); 
  for(i=0;i<n;i++)
  {
    printf("\nv%d->",i+1);
    temp=list[i];
    while(temp)
    {
      printf("v%d->",temp->vertex);
      temp=temp->next;
    }
            printf("NULL");
  }

}      
  int main()
  {
    int m[10][10],n;
    printf("\nEnter the number of vertices:");
    scanf("%d",&n);
    createmat(m,n);
    dispmat(m,n);
    createlist(m,n);
    displist(n);
  }



