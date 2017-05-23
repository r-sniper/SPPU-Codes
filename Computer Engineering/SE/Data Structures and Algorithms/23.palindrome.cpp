/*
A palindrome is a string of character that‘s the same forward and backward. Typically,
punctuation, capitalization, and spaces are ignored. For example, ‖Poor Dan is in a droop‖ is
a palindrome, as can be seen by examining the characters ―poor danisina droop‖ and
observing that they are the same forward and backward. One way to check for a
palindrome is to reverse the characters in the string and then compare with them the
original-in a palindrome, the sequence will be identical. Write C++ program with functions-
1.
to check whether given string is palindrome or not that uses a stack to determine
whether a string is a palindrome.
2. to remove spaces and punctuation in string, convert all the Characters to lowercase,
and then call above Palindrome checking function to check for a palindrome
3. to print string in reverse order using stack
*/

#include <iostream>
#include<cctype>
using namespace std;

char stack[100];
int top = -1;

void push(char c)
{
	if(top==99)
	{
		cout<<"Stack full\n";
		return;
	}
	top++;
	stack[top] = c;
}

char pop()
{
	if(top == -1)
	{
		//cout<<"Stack is empty\n";
		return 0;
	}
	char c = stack[top];
	top--;
	return c;
}

void convert(char str[])
{
	int count = 0;
	for(int i=0;str[i];i++)
	{
		if(isalpha(str[i]))
		{
			if(str[i] >= 'A' && str[i]<='Z')
				str[i]+=32;
			str[count] = str[i];
			count++;
		}
	}
	str[count] = '\0';
	cout<<"The converted string is :"<<str<<endl;
}

bool palindrome(char str[])
{
	for(int i=0;str[i];i++)
	{
		push(str[i]);
	}
	for(int i=0;str[i];i++)
	{
		if(str[i]!=pop())
			return false;
	}
	return true;
}

void reverse(char str[])
{
	top=-1;
	for(int i=0;str[i]!='\0';i++)
	{
		push(str[i]);
	}
	
	char ch=pop();
	while(ch)
	{
		cout<<ch;
		ch = pop();
	}
	
}

int main ()
{
	char str[100];
	cout<<"Enter the string:\n";
	ws(cin);		//To include whitespaces while taking input
	cin.getline(str,100);
	if(palindrome(str)==true)
		cout<<"String is palindrome\n";
	else
		cout<<"String is not palindrome\n";
	convert(str);
	if(palindrome(str)==true)
		cout<<"Converted string is palindrome\n";
	else
		cout<<"Converted string is not palindrome\n";
		
	cout<<"Reverse Using stack\n";
	reverse(str);
	return 0;
}
