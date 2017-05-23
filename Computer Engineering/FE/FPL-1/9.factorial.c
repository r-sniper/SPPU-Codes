/*
Write a C program to compute factorial of the given positive integer using recursive function
*/
#include<stdio.h>
int fact(int);
int main(){
  long num,ans;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  ans=fact(num);
  printf("\nFactorial of %d is: %d",num,ans);
  return 0;
}

long fact(int n){
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
 }
