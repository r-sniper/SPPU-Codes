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
