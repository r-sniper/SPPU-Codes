/*
Write a function in C++ to count and display the number of lines not starting with
alphabet 'A' present in a text file "STORY.TXT".
Example:
If the file "STORY.TXT" contains the following lines,
The roses are red.
A girl is playing there.
There is a playground.
An aeroplane is in the sky.
Numbers are not allowed in the password.
The function should display the output as 3.
*/
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream fp;
	string line;
	fp.open("test.txt");
	int count = 0;
	if(fp.is_open())
	{
		while(getline(fp,line))
		{
			if(line[0]!='A')
				count++;
		}
		cout<<count<<endl;
	}
	else
	{
		cout<<"File not found\n";
	}
	return 0;
}
