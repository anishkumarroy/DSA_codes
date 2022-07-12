#include<stdio.h>
#include<stdlib.h>
struct node { struct node *prev; int data; struct node *next;};
int main()
{ 
	struct node *head=NULL, *temp, *tail, *newnode; int choice=1; 
	while(choice){ newnode=(struct node *)malloc(sizeof(struct node)); printf("Enter data: "); scanf("%d", &newnode->data); newnode->prev=NULL; newnode->next=NULL;
	if(head==NULL) head=temp=newnode;
	else { temp->next=newnode; newnode->prev=temp; temp=newnode;}
	printf("Do you want to continue?\nIf yes, press 1\nIf no, press 0\n"); scanf("%d", &choice); } tail=temp;
	printf("Enter the position from where you want to delete:\n1. From Beginning\n2. From End\n3. From any intermediate position\n");
	scanf("%d", &choice); switch(choice){
	case 1: temp=head; head=head->next; head->prev=NULL; free(temp); break;
	case 2: temp=tail;tail=tail->prev; tail->next=NULL; free(temp); break;
	case 3: printf("Enter the position, from where you want to delete: "); int n; scanf("%d", &n); temp=head; for(int i=1;i<n;i++) 
	 temp=temp->next; temp->prev->next=temp->next; temp->next->prev=temp->prev; free(temp); break;
	}
printf("Now traversing the data that we entered\n");
temp=head;
while(temp!=NULL){
printf("%d ", temp->data);
temp=temp->next;}
}
	
