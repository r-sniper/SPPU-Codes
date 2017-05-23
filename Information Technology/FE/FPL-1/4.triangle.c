/*
WAP C program to accept  length of triangle & check whether a triangle is Equilateral, Isosceles or Scalene
*/
 #include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a==b && b==c)
        {
            printf("Equilateral triangle.");//If all sides are equal
        }
    else if(a==b || a==c || b==c)
        {
            printf("Isosceles triangle.");//If two sides are equal
        }
    else
        {
            printf("Scalene triangle.");//If none sides are equal
        }

    return 0;
}
