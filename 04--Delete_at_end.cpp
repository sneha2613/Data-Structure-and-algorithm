/*04--All Linked list operation*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head;

node *createNode(){
	node *temp=(node*)malloc(sizeof(node));
	return node;
}

void insert_at_begin(){
	node *temp=createNode();
	printf("\nEnter the data: ");
	scanf("%d", &temp->data);
	if(head==NULL)
		head=temp;
	else{
		temp->next=head;
		head=temp;
	}
	printf("\nInserted");
}

void insert_at_end(){
	node *temp=createNode();
	printf("\nEnter the data: ");
	scanf("%d",&temp->data);
	if(head==NULL)
		temp=head;
	else{
		node *ref=head;
		while(ref!=ref->next=NULL){
			ref=ref->next;
		}
		ref->next=temp;
	}
}

void delete_at_begin()
	if(head==NULL)
		printf("\nUnderflow");
	if(head->next=NULL)
		free(head);
	else{
		
	}
}
