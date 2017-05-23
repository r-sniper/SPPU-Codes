/*
Print elements in ascending order
*/
#include <iostream>

using namespace std;
class Sortnumber
{   int n,a[8];
    public:
    void getdata();
    void sort();
    void display();
};

void Sortnumber::getdata()
{
    int i;
    cout<<"\n How many elements ";
    cin>>n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++)
    cin>>a[i];
}


void Sortnumber::display()
{
    int i;
    cout<<"\n Elements in ascending order are \n";
    for(i=0;i<n;i++)
    cout<<" "<<a[i];
}

void Sortnumber::sort()
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=1;j<(n-i);j++)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;

            }
        }
    }
}

int main()
{
    Sortnumber ob;
    ob.getdata();
    ob.sort();
    ob.display();
    return 0;
}
