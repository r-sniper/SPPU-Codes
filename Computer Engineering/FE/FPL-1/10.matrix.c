/*
write a C program to compute addition/subtraction/multiplication of two matrices
*/
#include<stdio.h>
int main()
 {
   int i,j,c,r,k;
   int a[20][20],b[20][20],ma[20][20],ms[20][20];
   int mm[20][20];
   printf("\nEnter the value for row and column:  ");
   scanf("%d%d",&c,&r);
   printf("\nEnter the value for matrix A\n");
   for(i=0;i<c;i++)
     {
       for(j=0;j<r;j++)
        {
         scanf("%d",&a[i][j]);
        }
       printf("\n");
     }
   printf("\nEnter the value for matrix B\n");
   for(i=0;i<c;i++)
     {
       for(j=0;j<r;j++)
        {
          scanf("%d",&b[i][j]);
        }
       printf("\n");
     }
   for(i=0;i<c;i++)
     {
       for(j=0;j<r;j++)
         {
          ma[i][j]=a[i][j]+b[i][j];
          ms[i][j]=a[i][j]-b[i][j];
         }
     }
   for(i=0;i<c;i++)
     {
       for(j=0;j<r;j++)
         {
           mm[i][j]=0;
           for(k=0;k<c;k++)
             {
               mm[i][j] +=a[i][k]*b[k][j];
             }
         }
     }
   printf("\nThe addition matrix is:\n");
   for(i=0;i<c;i++)
     {
       for(j=0;j<r;j++)
         {
          printf("\t\t%d",ma[i][j]);
         }
       printf("\n");
     }
   printf("\nThe subtraction matrix is:\n");
   for(i=0;i<c;i++)
     {
       for(j=0;j<r;j++)
         {
           printf("\t\t%d",ms[i][j]);
         }
       printf("\n");
     }
   printf("\nThe multiplication matrix is:\n");
   for(i=0;i<c;i++)
     {
       for(j=0;j<r;j++)
         {
           printf("\t\t%d",mm[i][j]);
         }
       printf("\n");
     }
   return 0;
 }


