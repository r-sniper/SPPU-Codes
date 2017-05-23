/*
WAP C program to accept the string & display the follow :
 a) Total no of characters in the string
 b) Total no of vowels in the string
 c) Total no of occurrences of character 'a' in the string
 d) Total no of occurrences of character 'the' in the string
*/
 #include <stdio.h>
int main()
{
    char a[100];
    int i,len=0,vowel=0,la=0,the=0;
    printf("Enter a string: ");
    geta();
    while(a[len!=\0])
    {
            len++;
    }
    printf(" The total number of characters in the string are:%d\n",len);
    for(i=0;i<len-1;i++)
    {
        if(a[i]=='a')
        la++;
        if(a[i]=='a' || a[i]=='e' || a[i]=='i'|| a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I'|| a[i]=='O' || a[i]=='U')
            vowel++;
    }
        printf(" The total number of vowels in the string are:%d\n",vowel);
        printf(" The total number of occurrences of the character a are:%d\n",la);
    for(i=0;i<=len-4;i++)
    {
        if(a[i]=='t' && a[i+1]=='h' && a[i+2]=='e')
            the++;
    }
    printf(" The total number of  occurrences of the string is:%d\n",the);

    return 0;
}
