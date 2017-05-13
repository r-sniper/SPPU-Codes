/*
Let x = (x 1 ,x 2 , ... , x n ) and y = (y 1 , y 2 ,.... , y m ) be two doubly linked lists. Assume that in
each linked list, the nodes are in non-decreasing order of their data-field values. Write an
C/C++ program to merge the two lists to obtain a new linked list z in which the nodes are
also in this order. Following the merge, x and y should represent empty lists because each
node initially in x or y is now in z. No additional nodes may be used.
*/

#include <iostream>
#include<cctype>
using namespace std;

struct node
{
	node *prev = NULL,*next = NULL;
	int data;
}*headX = NULL,*headY = NULL,*headZ = NULL;

void print(node *head)
{
	node *temp = head;
	while(temp)
	{
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}

void insert(node *&head,int value)
{
	node *temp = new node;
	temp->data = value;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		node *trav = head;
		while(trav->next)
			trav = trav->next;
			
		trav->next = temp;
		temp->prev = trav;
	}
}

void initialize()
{
	cout<<"Enter number of elements for 1st list\n";
	int n,value;
	cin>>n;
	cout<<"Start Entering data in ascending order\n";
	for(int i=0;i<n;i++)
	{
		cin>>value;
		insert(headX,value);		
	}
	
	cout<<"Enter number of elements for 2nd list\n";
	cin>>n;
	cout<<"Start Entering data in ascending order\n";
	for(int i=0;i<n;i++)
	{
		cin>>value;
		insert(headY,value);
	}
}

void merge()
{
	while(headX || headY)
	{
		if(headX!=NULL && ( headY==NULL || headX->data < headY->data))
		{
			insert(headZ,headX->data);
			node *temp = headX;
			headX = headX->next;
			delete temp;
		}
		else
		{
			insert(headZ,headY->data);
			node *temp = headY;
			headY = headY->next;
			delete temp;
		}
	}
}

int main ()
{
	initialize();
	merge();
	cout<<"Merged List is\n";
	print(headZ);
	return 0;
}
