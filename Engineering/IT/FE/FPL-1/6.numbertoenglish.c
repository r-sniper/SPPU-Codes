//WAP a C program to read an integer and display number in English
#include<stdio.h>

int main()
{
    int number,j,digit,i=0;
    char *word[1000];

    printf("Enter any integer: ");
    scanf("%d",&number);

		while(number)
        {

        digit = number %10;
        number = number /10;

        switch(digit){
             case 0: word[i++] = "zero";
             	break;
             case 1: word[i++] = "one";
             	break;
             case 2: word[i++] = "two";
             	break;
             case 3: word[i++] = "three";
             	break;
             case 4: word[i++] = "four";
             	break;
             case 5: word[i++] = "five";
             	break;
             case 6: word[i++] = "six";
             	break;
             case 7: word[i++] = "seven";
             	break;
             case 8: word[i++] = "eight";
             	break;
             case 9: word[i++] = "nine";
             	break;

         }
    }

    for(j=i-1;j>=0;j--){
         printf("%s ",word[j]);
    }

    return 0;

}
