#include <iostream>
using namespace std;

void input(int mat[][10], int row, int col)
{
	cout<<"Start Entering values\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>mat[i][j];
		}
	}
}

void print(int mat[][10], int row, int col)
{
	cout<<"---Matrix---\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}



int main ()
{
	
  	int mat1[10][10], mat2[10][10];
  	int row1,col1,row2,col2;
  	cout<<"Enter number of rows and columns for 1st matrix\n";
  	cin>>row1>>col1;
  	
  	input(mat1,row1,col1);
  	cout<<"Enter number of rows and columns for 2nd matrix\n";
  	cin>>row2>>col2;
  	input(mat2,row2,col2);
  	print(mat1,row1,col1);
  	print(mat2,row2,col2);
	return 0;
}
