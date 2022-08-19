/*03--Insert Node at beginning of a Linked list*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head;

node *createNode(){
	node *temp=(node*)malloc(sizeof(node));
	return temp;
}

void insert_at_begin(){
	node *temp=createNode();
	printf("\nEnter the data of the node: ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	
	if(head==NULL)
		head=temp;
	else{
		temp->next=head;
		head=temp;
	}
	printf("\nInserted");
}

int main(){
	insert_at_begin();
	insert_at_begin();
	insert_at_begin();
}
