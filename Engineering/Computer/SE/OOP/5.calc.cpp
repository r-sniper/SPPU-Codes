#include <iostream>
#include<cmath>
using namespace std;


int main ()
{
  	float num1,num2;
  	float answer=0;
  	char choice;
  	char op;
  	do
  	{
  		cout<<"Enter first number, operator(+,-,*,/), second number\n";
	  	cin>>num1>>op>>num2;
	  	answer = 0;
  		switch(op)
  		{
  			case '+':
  				answer = num1+num2;
  				break;
  			case '-':
  				answer = num1-num2;
  				break;
  			case '*':
  				answer = num1*num2;
  				break;
  			case '/':
  				answer = num1/num2;
  				break;
  			default:
  				cout<<"Please enter a valid operator(+,-,*,/)\n";
  				break;
   		}
   		cout<<"Answer = "<<answer<<endl;
   		cout<<"Do you want to continue? (y/n)";
   		cin>>choice;
   	}while(choice=='y' || choice == 'Y');
   	cout<<"Exited\n";
	return 0;
}
