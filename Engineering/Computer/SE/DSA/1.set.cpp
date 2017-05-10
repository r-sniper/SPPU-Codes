#include<iostream>
using namespace std;
int total;

void displayMenu()
{
	cout<<"------Menu------\n"
		<<"1. Cricket or Badminton or Both (Union)\n"
		<<"2. Cricket and Badminton (Intersection)\n"
		<<"3. Only Cricket (A-B)\n"
		<<"4. Only Badminton (B-A)\n"
		<<"5. Neither Cricket nor Badminton( (AUB)')\n"
		<<"6: Exit\n";
}

bool exists(int arr[],int element,int length)
{
	for(int i=0;i<length;i++)
	{
		if(arr[i]==element)
			return true;				//Return true if the element is found
	}
	return false;						//Return false id the element is not found
}

void unio(int setA[],int setB[],int lenA,int lenB)
{
	int ans[lenA+lenB];		//First copy setA
	int ansCount=lenA;
	for(int i=0;i<lenA;i++)
	{
		ans[i] = setA[i];
	}
	for(int i=0;i<lenB;i++)
	{
		if(exists(setA,setB[i],lenB)==false)
		{
			ans[ansCount]=setB[i];
			ansCount++;
		}
	}
	cout<<"Union\n";
	for(int i=0;i<ansCount;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}

void intersection(int setA[],int setB[],int lenA,int lenB)
{
	int ans[100];
	int ansCount = 0;
	for(int i=0;i<lenA;i++)
	{
		if(exists(setB,setA[i],lenB)==true)
		{
			ans[ansCount] = setA[i];
			ansCount++;
		}
	}
	for(int i=0;i<ansCount;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
}

void onlyCricket(int setA[],int setB[],int lenA,int lenB)
{
	int ans[100];
	int ansCount = 0;
	for(int i=0;i<lenA;i++)
	{
		if(exists(setB,setA[i],lenB)==false)
		{
			ans[ansCount] = setA[i];
			ansCount++;
		}
	}
	for(int i=0;i<ansCount;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
}

void onlyBadminton(int setA[],int setB[],int lenA,int lenB)
{
	int ans[100];
	int ansCount = 0;
	for(int i=0;i<lenB;i++)
	{
		if(exists(setA,setB[i],lenA)==false)
		{
			ans[ansCount] = setB[i];
			ansCount++;
		}
	}
	for(int i=0;i<ansCount;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
}

void neitherNor(int setA[],int setB[],int lenA,int lenB)
{
	int ans[total];
	int ansCount = 0;
	for(int i=1;i<=total;i++)
	{
		if(exists(setA,i,lenA)==false && exists(setA,i,lenA)==false)
		{
			ans[ansCount] = i;
			ansCount++;
		}
	}
	for(int i=0;i<ansCount;i++)
		cout<<ans[i]<<" ";
	cout<<endl;
}

int main()
{
	int choice;
	int numCricket,numBadminton;
	cout<<"Enter total number of students\n";
	cin>>total;
	cout<<"Enter number of people that play cricket\n";
	cin>>numCricket;
	int cricket[numCricket];
	cout<<"Enter roll numbers of students that play cricket\n";
	for(int i=0;i<numCricket;i++)
	{
		cin>>cricket[i];
		while(cricket[i]>total || cricket[i]<=0|| exists(cricket,cricket[i],i)==true)//Check if the entered roll number 
		{																		//already exists in the set or if is invalid
		
			cout<<"Number not valid\nPlease enter again\n";
			cin>>cricket[i];
		}
	}
	cout<<"Enter number of people that play Badminton\n";
	cin>>numBadminton;
	int badminton[numBadminton];
	cout<<"Enter roll numbers of students that play Badminton\n";
	for(int i=0;i<numBadminton;i++)
	{
		cin>>badminton[i];
		while(badminton[i]>total || badminton[i]<=0 || exists(badminton,badminton[i],i)==true)//if the entered roll number 
		{																		//already exists in the set or if is invalid
		
			cout<<"Number not valid\nPlease enter again\n";
			cin>>badminton[i];
		}
	}
	do
	{
		displayMenu();
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				unio(cricket,badminton,numCricket,numBadminton);
				break;
			case 2:
				intersection(cricket,badminton,numCricket,numBadminton);
				break;
			case 3:
				onlyCricket(cricket,badminton,numCricket,numBadminton);
				break;
			case 4:
				onlyBadminton(cricket,badminton,numCricket,numBadminton);
				break;
			case 5:
				neitherNor(cricket,badminton,numCricket,numBadminton);
				break;
			case 6:
				break;
			default:
				cout<<"Please correct choice\n";
		}
	}while(choice!=6);
	return 0;
}
