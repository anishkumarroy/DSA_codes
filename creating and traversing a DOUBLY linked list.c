#include<stdio.h>
#include<stdlib.h>
struct node { struct node *prev; int data; struct node *next;};
int main()
{
	struct node *head=NULL, *temp, *newnode; int choice=1;
	while(choice){ newnode=(struct node *)malloc(sizeof(struct node)); printf("enter data: "); scanf("%d", &newnode->data); newnode->prev=NULL; newnode->next=NULL;
	if(head==NULL) head=temp=newnode;
	else { temp->next=newnode; newnode->prev=temp; temp=newnode;} 
	printf("Do you want to continue?\nIf yes, press 1\nIf no, press 0\n"); scanf("%d", &choice); }
printf("Now traversing the data that we entered\n");
temp=head;
while(temp!=NULL){
printf("%d ", temp->data);
temp=temp->next;
}
}
	
