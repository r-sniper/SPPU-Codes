/*
Write a C program to generate first 20 fibonacci numbers
*/
#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            printf("\n%d", t1);

        }
        if(i == 2)
        {
            printf("\n%d", t2);

        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("\n%d", nextTerm);
    }
    return 0;
}
