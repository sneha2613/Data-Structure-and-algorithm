/*All basic operation in Singly Linked list*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head;

node *createNode(){
	node *temp=(node*)malloc(sizeof(node));
	temp->next=NULL;
	return temp;
}

void insert_at_end(){
	node *temp=createNode();
	printf("\nEnter the data what u want to insert at the end of the list: ");
	scanf("%d", &temp->data);
	if(head==NULL)
		head=temp;
	else{
		node *ref=head;
		while(ref->next!=NULL)
			ref=ref->next;
		ref->next=temp;
	}
	printf("\nYour data is successfully Inserted.");
}

void insert_at_start(){
	node *temp=createNode();
	printf("\nEnter the data what u want to insert at the start of the list: ");
	scanf("%d", &temp->data);
	if(head==NULL)
		head=temp;
	else{
		temp->next=head;
		head=temp;
	}
	printf("\nYour data is successfully Inserted.");
}


void insert_at_any_position(){
	int position,count=1;
	node *temp=createNode();
	printf("\nEnter the data what u want to insert: ");
	scanf("%d", &temp->data);
	printf("\nPlease Enter the position: ");
	scanf("%d", position);
	if(head==NULL && position==1){
		head=temp;
	}
	else if((position<=0 || (position>count && head=NULL)))
		printf("\nInvalid");
	else if(position ==1 && head!=NULL){
		temp->next=head;
		head=temp;
	}
	else{
		node *t=head, *prev;
		while(t->next!=NULL &&count<pos){
			prev=t;
			t=t->next;
			count++;
		}
		temp->next=t;
		prev->next=temp;
	}
}
void delete_at_end(){
	node *t=head;
	node *del;
	if(head->next==NULL){
		del=head;
		head=NULL;
	}
	else{
		while(t->next!=NULL)
			t=t->next;
		del=t->next;
		t->next=NULL;
	}
	free(del);
	printf("\nAfter deleting the list will be: ");
	
}

void delete_at_begin(){
	node *t=head;
	node *del;
	if(head->next==NULL){
		del=head;
		head=NULL;
	}
	else{
		del=head;
		head=head->next;
	}
	free(del);
	printf("\nAfter deleting the list will be: ");
}

void delete_at_any_position(){
	int pos;
	node *temp=head;
	printf("\nPlease enter the position where u want to delete: ");
	scanf("%d",&pos);
	int count=1;
	if(pos<=0||(pos>=count && head==NULL))
		printf("\nInvalid");
	else if(pos==1 && head!=NULL){
		head=head->next;
		free(temp);
	}
	else{
		node *t=head, *prev;
		while(t->next!=NULL &&count<pos){
			prev=t;
			t=t->next;
			count++;
		}
		if(pos>count)
			printf("\nInvalid");
		else{
			prev->next=t->next;
			temp=t;
			free(temp);
		}
	}
	printf("\nAfter deleting the list will be: ");
}


void traverse(){
	node *temp=head;
	while(temp!=NULL){
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}

int main(){
	insert_at_end();
	insert_at_start();
	insert_at_start();
	traverse();
	insert_at_start();
	insert_at_start();
	traverse();
	insert_at_end();
	delete_at_end();
	traverse();
	delete_at_begin();
	traverse();
	delete_at_any_position();
	traverse();
	return 0;
}
