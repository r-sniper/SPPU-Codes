#include<iostream>

using namespace std;

bool used[]={false,false,false,false};
char password[5]={NULL}; 

void allPossiblePassword(const char a[],int passLength,int &number)    //Constant because we will not be modifying original array
{
	for(int i=0;i<number;i++)
	{
		if(used[i]==false)
		{
			password[passLength-1] = a[i];
			used[i] = true;
			if(passLength==1)
			{
				for(int i=3;i>=0;i--)
					cout<<password[i];
				cout<<endl;
			}
			else
			{
				allPossiblePassword(a,passLength-1,number);
			}
			used[i] = false;
		}
	}
}

int main()
{
	char a[] = {'1','3','a','s','t','i'};
	int passLength = 4;
	int numberOfElements =6; 
	allPossiblePassword(a,passLength,numberOfElements);
	return 0;
}
