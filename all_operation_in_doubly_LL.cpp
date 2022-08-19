/*All operation of doubly Linked list*/
 #include<stdio.h>
 #include<stdlib.h>
 
 typedef struct node{
 	int data;
 	struct node *next;
 	struct node *prev;
 }node;
 
 node *head=NULL;
 
 node *createNode(){
 	node *temp=(node*)malloc(sizeof(node));
 	return temp;
 }
 void insert_at_end(){
 	
 }
