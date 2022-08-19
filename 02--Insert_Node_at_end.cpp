/*01--Insert a node at the end of the singly Linked list*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{		//Declare the structure of the node.
	int data;				//This is for data part.
	struct node *next;		//Its for address part.
}node;

node *createNode(){			//This fuction is used to create a new node.
	node *temp=(node*)malloc(sizeof(node));
	return temp;
}

node *head;					//Declare head globaly to access it into all the fuction.

void insert_at_end(){
	node *temp=createNode();
	printf("\nEnter the data what u insert: ");
	scanf("%d", &temp->data);
	temp->next=NULL;
	if(head==NULL)
		head=temp;
	else{
		node *ref=head;
		while(ref->next!=NULL)
			ref=ref->next;
		ref->next=temp;
	}
	printf("\nInserted");
}

int main(){
	int size,num;
	printf("\nEnter the size of data u want to insert: ");
	scanf("%d", &size);
	while(size--){
		insert_at_end();
	}
	printf("\nAre u want to again insert data  ?? Please enter -- (1) For insert , (0)for don't insert\n");
	scanf("%d",&num);
	if(num==1){
		insert_at_end();
	}
	else{
		printf("\nThank you for using it -- ^_^");
	}
}

