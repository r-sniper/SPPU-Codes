/*
Implement a class CppArray which is identical to a one-dimensional C++ array (i.e., the
index set is a set of consecutive integers starting at 0) except for the following :
1. It performs range checking.
2. It allows one to be assigned to another array through the use of the assignment
operator (e.g. cp1= cp2)
3. It supports a function that returns the size of the array.
4. It allows the reading or printing of array through the use of cout and cin.
*/
#include <iostream>
#include<cmath>
using namespace std;

const int maxSize = 100;
class myArray
{
	private:
		
		int arr[maxSize];
		int len=0;
	public:
	
		bool isInRange(int min,int max);
		friend istream& operator >>(istream& ,myArray&);
		friend ostream& operator <<(ostream& ,myArray);
};

ostream& operator <<(ostream& output,myArray obj)
{
	for(int i=0;i<obj.len;i++)
		output<<obj.arr[i]<<" ";
	output<<endl;
	return output;
}

bool myArray::isInRange(int min,int max)
{
	for(int i=0;i<len;i++)
	{
		if(arr[i] < min || arr[i] > max)
			return false;
	}
	return true;
}

istream& operator >>(istream& input,myArray& obj)
{
	int n;
	cout<<"Enter the number of elements you eant to insert\n";
  	input>>n;
	cout<<"Start Entering elements\n";
	for(int i=0;i<n;i++)
	{
		input>>obj.arr[obj.len+i];
	}
	obj.len+=n;
	return input;
}

int main ()
{
	int n,min,max;
  	myArray obj,temp;
  	cin>>obj;
  	cout<<obj;
  	cout<<"Enter minimum and maximum value to check if the array is in range\n";
  	cin>>min>>max;
  	if(obj.isInRange(min,max))
  	{
  		cout<<"Array is in range\n";
  	}
  	else
  	{
  		cout<<"Array is not in range\n";
  	}
  	cout<<"Now copying contents of one array to other using '=' operator\n";
  	temp = obj;
  	cout<<"Copied array is\n";
  	cout<<temp;
	return 0;
}
