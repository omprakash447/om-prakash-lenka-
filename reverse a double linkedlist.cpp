//Reverse a double linked list//
#include<stdio.h>
#include<stdlib.h>
  struct node{
  	struct node*prev;
  	int data;
  	struct node*next;
  };
  int main()
  {
  	struct node*head=(struct node*)malloc(sizeof(struct node));
  	struct node*node1=(struct node*)malloc(sizeof(struct node));
  	struct node*node2=(struct node*)malloc(sizeof(struct node));
  	struct node*node3=(struct node*)malloc(sizeof(struct node));
  	
  	head->prev=NULL;
  	head->data=100;
  	head->next=node1;
  	node1->prev=head;
  	node1->data=200;
  	node1->next=node2;
  	node2->prev=node1;
  	node2->data=300;
  	node2->next=node3;
  	node3->prev=node2;
  	node3->data=400;
  	node3->next=NULL;
  	
  	printf("Before the reverse of the double linked list...");
  	printf("\n%d",head->data);
  	printf("\n%d",node1->data);
  	printf("\n%d",node2->data);
  	printf("\n%d",node3->data);
  	
  	node3->prev=NULL;
  	node3->data=400;
  	node3->next=node2;
  	node2->prev=node3;
  	node2->data=300;
  	node2->next=node3;
  	node1->prev=node2;
  	node1->data=200;
  	node1->next=head;
  	head->prev=node1;
  	head->data=100;
  	head->next=NULL;
  	
  	printf("\nAfter tye reverse of the double linkd list...");
  	printf("\n%d",node3->data);
  	printf("\n%d",node2->data);
  	printf("\n%d",node1->data);
  	printf("\n%d",head->data);
  	
  	return 0;	
  }
