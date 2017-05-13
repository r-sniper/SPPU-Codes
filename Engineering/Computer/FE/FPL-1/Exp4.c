//Accept 5 nunbers & display in ascending order


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp,arr[5];
    printf("Enter 5 numbers\n");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    printf("sorted array elements:\n ");
    for(i=0;i<5;i++)
    printf("%d",arr[i]);
    return 0;
}
