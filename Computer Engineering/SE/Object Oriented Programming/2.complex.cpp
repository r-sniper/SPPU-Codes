/*
Implement a class Complex which represents the Complex Number data type. Implement
the following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.
*/
#include <iostream>
using namespace std;

class complex
{
	private:
		float real,imag;
	public:
		complex operator +(complex );
		friend istream& operator >>(istream& input,complex& temp);
		friend ostream& operator <<(ostream& output,complex temp);
		complex()			//Constructor
		{
			real = 0.0;
			imag = 0.0;
		}
};
istream& operator >>(istream& input,complex& temp)
{
	cout<<"Enter real part: ";
	input>>temp.real;
	cout<<"Enter imaginary part: ";
	input>>temp.imag;
	return input;
}

ostream& operator <<(ostream& output,complex temp)
{
	output<<temp.real<<" + ";
	output<<temp.imag<<"i"<<endl;
	return output;
}

complex complex::operator +(complex obj2)
{
	complex result;
	result.real = real + obj2.real;
	result.imag = imag + obj2.imag;
	return result;
}

int main ()
{
  	complex c1,c2;
  	cin>>c1>>c2;
  	complex c3 = c1+c2;
  	cout<<c1<<c2;
  	cout<<"--------\n";
  	cout<<c3;
	return 0;
}
