/*
A magazine committee is to be formed that consists of any 3 members to be selected from
{ Nikhita, Aboli, Megha, Sanika, Pratik, Saurabh}. Write C/C++ program to list all possible
committees.
*/

#include<iostream>
#include<cstring>
using namespace std;

bool used[]={false,false,false,false};
string members[3]; 

void allPossiblePassword(const string a[],int memLength,int &number)    //Constant because we will not be modifying original array
{
	for(int i=0;i<number;i++)
	{
		if(used[i]==false)
		{
			members[memLength-1] = a[i];
			used[i] = true;
			if(memLength==1)
			{
				for(int i=2;i>=0;i--)
					cout<<members[i]<<" ";
				cout<<endl;
			}
			else
			{
				allPossiblePassword(a,memLength-1,number);
			}
			used[i] = false;
		}
	}
}

int main()
{
	string members[] = {"Nikhita", "Aboli", "Megha", "Sanika", "Pratik", "Saurabh"};
	int memLength = 2;
	int numberOfMembers =6; 
	allPossiblePassword(members,memLength,numberOfMembers);
	return 0;
}
