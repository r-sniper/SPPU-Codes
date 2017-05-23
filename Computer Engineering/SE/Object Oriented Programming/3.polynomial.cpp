/*
Implement a class Quadratic that represents degree two polynomials i.e., polynomials of
type ax 2 +bx+c. The class will require three data members corresponding to a, b and c.
Implement the following operations:
1. A constructor (including a default constructor which creates the 0 polynomial).
2. Overloaded operator+ to add two polynomials of degree 2.
3. Overloaded << and >> to print and read polynomials. To do this, you will need
to decide what you want your input and output format to look like.
4. A function eval that computes the value of a polynomial for a given value of x.
5. A function that computes the two solutions of the equation ax 2 +bx+c=0.
*/
#include <iostream>
#include<cmath>
using namespace std;

class Quadratic
{
	private:
		int a,b,c;
	public:
		Quadratic operator +(Quadratic );
		friend istream& operator >>(istream& input,Quadratic& temp);
		friend ostream& operator <<(ostream& output,Quadratic temp);
		void evaluate(int);
		void solution();
		Quadratic()
		{
			a=0;
			b=0;
			c=0;
		}
		
};

istream& operator >>(istream& input,Quadratic& temp)
{
	cout<<"Enter coefficient for x^2 :";
	input>>temp.a;
	cout<<"Enter coefficient for x :";
	input>>temp.b;
	cout<<"Enter the constant part :";
	input>>temp.c;
	return input;
}

ostream& operator <<(ostream& output,Quadratic temp)
{
	output<<temp.a<<"x^2 + "<<temp.b<<"x + "<<temp.c<<endl; 
	return output;
}

Quadratic Quadratic::operator +(Quadratic obj2)
{
	Quadratic result;
	result.a = a + obj2.a;
	result.b = b + obj2.b;
	result.c = c + obj2.c;
	return result;
}

void Quadratic::evaluate(int x)
{
	int result = a*x*x + b*x + c;
	cout<<"Value of ";
	cout<<*this;
	cout<<"for x="<<x<<" is "<<result<<endl;
}

void Quadratic::solution()
{
	float root1 = (-b + sqrt(b*b - 4*a*c))/(float)2*a;
	float root2 = (-b - sqrt(b*b - 4*a*c))/(float)2*a;
	cout<<"Roots are : "<<root1<<" "<<root2<<endl;
}

int main ()
{
  	Quadratic poly1,poly2,poly3;
  	cin>>poly1>>poly2;
  	poly3 = poly1 + poly2;
  	cout<<poly1<<poly2;
  	cout<<"---------------\n";
  	cout<<poly3;
  	int x;
  	cout<<"Enter value of x: ";
  	cin>>x;
  	poly3.evaluate(x);
  	poly3.solution();
	return 0;
}
