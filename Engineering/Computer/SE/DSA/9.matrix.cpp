/*
Write C/C++ program for storing matrix. Write functions for
a) Check whether given matrix is upper triangular or not
b) Compute summation of diagonal elements
c) Compute transpose of matrix
d) Add, subtract and multiply two matrices
*/

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

bool checkUpperTriangular(int mat[][10], int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(j<i)				//For elements below diagonal
			{
				if(mat[i][j]!=0)
					return false;
			}
		}
	}
	return true;
}

int diagonalSum(int mat[][10],int row,int col)
{
	if(row!=col)
	{
		cout<<"Matrix is not square matrix\n";
		return 0;
	}
	
	int sum = 0;
	for(int i=0;i<row;i++)
	{
		sum += mat[i][i];
	}
	return sum;
}

void transpose(int mat[][10],int row,int col)
{
	int temp;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}
	print(mat,row,col);
}

void add(int mat1[][10],int row1,int col1,int mat2[][10],int row2,int col2)
{

	if(row1!=row2 || col1!=col2)
	{
		cout<<"Rows and columns of both matrix must be same for addition\n";
		return;
	}
	int ans[10][10];
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			ans[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	cout<<"Addition is\n";
	print(ans,row1,col1);
}

void subtract(int mat1[][10],int row1,int col1,int mat2[][10],int row2,int col2)
{

	if(row1!=row2 || col1!=col2)
	{
		cout<<"Rows and columns of both matrix must be same for subtraction\n";
		return;
	}
	int ans[10][10];
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			ans[i][j] = mat1[i][j] - mat2[i][j];
		}
	}
	cout<<"Subtraction is\n";
	print(ans,row1,col1);
}

void multiply(int mat1[][10],int row1,int col1,int mat2[][10],int row2,int col2)
{

	if(col1 != row2)
	{
		cout<<"Cannot be multiplied\n";
		return;
	}
	int ans[10][10] = {0};
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col2;j++)
		{
			for(int k=0;k<col1;k++)
			{
				ans[i][j] += (mat1[i][k] * mat2[j][k]);
			}
		}
	}
	cout<<"Multiplication is\n";
	print(ans,row1,col2);
}

int main ()
{
	
  	int mat[10][10],mat1[10][10], mat2[10][10];
  	int row,col,row1,col1,row2,col2;
  	cout<<"Enter number of rows and columns for 1st matrix\n";
  	cin>>row>>col;
  	
  	input(mat,row,col);
  	cout<<"Matrix\n";
  	print(mat,row,col);
  	if(checkUpperTriangular(mat,row,col)==true)
  	{
  		cout<<"is upper Triangular\n";
  	}
  	else
  	{
  		cout<<"is not upper Triangular\n";
  	}
  	int sum = diagonalSum(mat,row,col);
  	cout<<"Diagonal Sum = "<<sum<<endl;
  	
  	cout<<"Transpose is\n";
  	transpose(mat,row,col);
  	print(mat,row,col);
  	
  	cout<<"Enter number of rows and columns for 1st matrix\n";
  	cin>>row1>>col1;
  	input(mat1,row1,col1);
  	
  	cout<<"Enter number of rows and columns for 2nd matrix\n";
  	cin>>row2>>col2;
  	input(mat2,row2,col2);
  	
  	add(mat1,row1,col1,mat2,row2,col2);
  	subtract(mat1,row1,col1,mat2,row2,col2);
  	multiply(mat1,row1,col1,mat2,row2,col2);
	return 0;
}
