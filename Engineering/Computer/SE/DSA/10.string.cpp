/*
Write C++ program with class for String. Write a function
1. frequency that determines the frequency of occurrence of particular character in the
string.
2. delete that accepts two integers, start and length. The function computes a new string
that is equivalent to the original string, except that length characters being at start have
been removed.
3. chardelete that accepts a character c. The function returns the string with all occurrences
of c removed.
4. replace to make an in-place replacement of a substring w of a string by the string x. note
that w may not be of same size of x
5. palindrome to check whether given string is palindrome or not
*/

#include<iostream>
using namespace std;

class myString
{
	private:
		char str[100] = 0;
		int length;
		
	public:
	
		int getFrequency(char c);
		string del(int start,int length);
};

int myString:: getFrequency(char c)
{
	int count = 0;
	for(int i=0;i<s.length();i++)
	{
		if(str[i]==c)
		{
			count++;
		}
	}
	return count;
}

string myString:: del(int start,int length)
{
	string temp;
	int count = 0;
	for(int i=0;i<s.length();i++)
	{
		if((i+1 < start) || (i+1 > start + length))
		{
			temp[count] = s[i]
			count++;
		}
	}
	return temp
}

int main()
{
	return 0;
}
