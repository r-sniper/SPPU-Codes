/*
Write a C++ program create a calculator for an arithmetic operator (+, -, *, /). The
program should take two operands from user and performs the operation on those two
operands depending upon the operator entered by user. Use a switch statement to select the
operation. Finally, display the result.
Some sample interaction with the program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*/
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
