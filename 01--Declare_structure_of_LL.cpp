/*01. Declare a structure of Linked List */
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;

node *createNode(){
	node *temp=(node*)malloc(sizeof(node));
	return temp;
}

int main(){
	node *head;
	node *temp=createNode();
	temp->data=10;
	temp->next=NULL;
	if(head==NULL)
		head=temp;
	printf("\n%d is inserted.", temp->data);
}
