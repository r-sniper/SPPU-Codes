//write a c++ program to add integer numbers
#include <iostream>

using namespace std;
class A
{
    private:
    int a,b,c;
    public:
    void input()
    {
        cout << "Enter two integers" << endl;
        cin  >>a>>b;
    }
    void display()
    {
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
    }
    void sum()
    {
        c=a+b;
        cout<<"Addition=\n"<<c;
    }
};
    int main()
{
    A b1; //boject of class A
    b1.input();
    b1.display();
    b1.sum();
    return 0;

}
