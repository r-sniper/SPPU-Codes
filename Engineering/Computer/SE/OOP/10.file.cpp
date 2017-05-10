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
