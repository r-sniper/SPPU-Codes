//Write a C program to compute factorial of the given positive integer using recursive function
#include<stdio.h>
int fact(int);
int main(){
  int num,f;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  f=fact(num);
  printf("\nFactorial of %d is: %d",num,f);
  return 0;
}

int fact(int n){
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
 }
