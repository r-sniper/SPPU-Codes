/*
Calculate sum of all numbers divisible by 4 from 1 to 100
*/
#include <stdio.h>
int main()
{
    int i, sum = 0 ;
    for(i=0;i<=100;i++)
     {
        if(i%4==0)
        {
            printf("\n %d",i);
            sum+=i;
        }
    }
 printf("\n Sum = %d\n",sum);


    return 0;
}
