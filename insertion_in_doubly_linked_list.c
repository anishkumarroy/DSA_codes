#include<stdio.h>
#include<stdlib.h>
struct node { struct node *prev; int data; struct node *next;};
int main()
{
	struct node *head=NULL, *tail,*temp, *newnode; int choice=1;
	while(choice){ newnode=(struct node *)malloc(sizeof(struct node)); printf("enter data: "); scanf("%d", &newnode->data); newnode->prev=NULL; newnode->next=NULL;
	if(head==NULL) head=temp=newnode;
	else { temp->next=newnode; newnode->prev=temp; temp=newnode;} 
	
	printf("Do you want to continue?\nIf yes, press 1\nIf no, press 0\n"); scanf("%d", &choice);}
	printf("Where do you want to insert newnode?\n1. At Beginning\n2. At End\n3. After a specific position\n");  scanf("%d", &choice);
	switch(choice){
	case 1: printf("Enter data: "); newnode=(struct node *)malloc(sizeof(struct node)); scanf("%d", &newnode->data); newnode->prev=NULL;
			newnode->next=head; head->prev=newnode; head=newnode; break;
	case 2: printf("Enter data: "); newnode=(struct node *)malloc(sizeof(struct node)); scanf("%d", &newnode->data); newnode->next=NULL; 
			temp->next=newnode; newnode->prev=temp; temp=newnode; break;
	case 3: printf("Enter the position after which you want to enter the element: "); int n,count=1; scanf("%d", &n);
			 newnode=(struct node *)malloc(sizeof(struct node)); printf("Enter data: "); scanf("%d", &newnode->data); temp=head;
			 while(count!=n){ temp=temp->next;} newnode->next=temp->next; newnode->prev=temp; break;
			 }
	printf("Now traversing the doubly linked list-\n"); temp=head; while(temp!=NULL) { printf("%d ", temp->data); temp=temp->next;}
}

