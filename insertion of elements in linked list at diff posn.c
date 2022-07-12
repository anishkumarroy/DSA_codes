#include<stdio.h>
#include<stdlib.h>
struct node { int data; struct node *next;};
int main(){
	struct node *head=NULL, *newnode, *temp=NULL;
	int choice=1; while(choice){newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data: "); scanf("%d", &newnode->data); newnode->next=NULL;
	if(head==NULL) head=temp=newnode;
	else {temp->next=newnode; temp=newnode;}
	printf("Enter a choice-");
	printf("\n 0 to exit \n 1 to renter data\n ");
	scanf("%d", &choice);}
	//printf("%d", head->data);
	printf("Now, enter the choice, where do you want to insert an extra node\n1. Beginning\n2. End\n3. At any intermediate position\n");
	scanf("%d", &choice);
	switch(choice){
	case 1: newnode=(struct node *)malloc(sizeof(struct node));
			printf("Enter data: "); scanf("%d", &newnode->data);
			newnode->next=head;
			head=newnode; break;
	case 2: newnode=(struct node *)malloc(sizeof(struct node));
			printf("Enter data: "); scanf("%d", &newnode->data);
			struct node *ptr=head;
			while(ptr->next!=NULL) ptr=ptr->next;
			ptr->next=newnode; break;
	case 3: newnode=(struct node *)malloc(sizeof(struct node));
			printf("Enter data: "); scanf("%d", &newnode->data); printf("\nEnter the position after which you want to insert this node: "); int n; scanf("%d", &n); ptr=head; int count=1;
			while(count!=n){
			 ptr=ptr->next; count++;} newnode->next=ptr->next; ptr->next=newnode; break;
	default: printf("Invalid choice"); break;
	}
	temp=head; while(temp!=NULL){ printf("%d ", temp->data); temp=temp->next;}
			
}
