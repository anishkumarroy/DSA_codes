#include<stdio.h>
#include<stdlib.h>
struct node { int data; struct node *next;};
int main()
{
	struct node *head=NULL, *temp, *newnode; int choice=1;
	while(choice){
	newnode=(struct node *)malloc(sizeof(struct node)); printf("Enter data: "); scanf("%d", &newnode->data); newnode->next=NULL;
	if(head==NULL) head=temp=newnode;
	else {temp->next=newnode; temp=newnode;}
	printf("Enter your choice\nIf yes, then press 1\nIf no, then press 0\n");
	scanf("%d", &choice);}
	printf("Enter your choice:\nPress 1, to delete from beginning\nPress 2, to delete from end\nPress 3, to delete from any intermediate position\n"); scanf("%d", &choice);
	switch(choice){
	case 1: temp=head; head=head->next; free(temp); break;
	case 2: struct node *prevnode; temp=head; while(temp->next!=NULL){ prevnode=temp; temp=temp->next;}
			prevnode->next=NULL; free(temp); break;
	case 3: printf("Specify the position of the node that you want to delete: "); temp=head;int n,count=1; scanf("%d", &n); while(count!=n){
			prevnode=temp; temp=temp->next; count++;} prevnode->next=temp->next; free(temp); break;
	default: printf("Invalid Choice"); break;
	}
	printf("Traversing--"); 
	temp=head; while(temp!=NULL){ printf("%d ", temp->data); temp=temp->next;}
}
