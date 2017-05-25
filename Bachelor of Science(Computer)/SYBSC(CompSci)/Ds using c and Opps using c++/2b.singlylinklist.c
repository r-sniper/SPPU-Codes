/*
2. There are lists where insertion should ensure the ordering of data elements.
Since the elements are in ascending order the search can terminate once equal or
greater element is found. Implement a singly linked list of ordered integers 
(ascending/descending) with insert, search and display operations.
a)Creation of singly linked list in sorted order [10]
b)Search, Display operation carries 4 marks each [8]
c)Insert Operation [7]
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int data;
	struct Node * next;
}Node;
Node * head;

void insert(Node* new_node)
{
    Node* current;
    /* Special case for the head end */
    if (head == NULL || head->data >= new_node->data)
    {
        new_node->next = head;
       head = new_node;
    }
    else
    {
        /* Locate the node before the point of insertion */
        current = head;
        while (current->next!=NULL&&current->next->data < new_node->data)
        	current = current->next;
        
        new_node->next = current->next;
        current->next = new_node;
    }
}
void display(){
	Node *t= head;
	printf("Null");
	while(t!=NULL){
		printf("->%d",t->data);
		t=t->next;
	}
}
Node * createNode(int data){
	Node * temp = (Node *) malloc(sizeof(Node));
	temp->data=data;
	temp->next=NULL;
	return temp;
}

void search(int data){
	Node *t= head;
	int i=1;
	while(t!=NULL){
		
		if(t->data==data)
		{
			printf("\nFound at position %d\n",i);
		}
		t=t->next;
		i++;
	}
}

int main(int argc, char const *argv[])
{

	head=NULL;
	insert(createNode(2));
	insert(createNode(6));
	insert(createNode(2));
	insert(createNode(4));
	insert(createNode(9));
	insert(createNode(8));
	display();

	search(9);
	return 0;
}
