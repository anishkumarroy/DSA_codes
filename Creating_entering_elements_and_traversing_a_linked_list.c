#include<stdio.h>
#include<stdlib.h>
struct node{
int data; struct node *link;
};
int main(){
struct node *head, *newnode, *temp;
head=NULL; int choice=1;
while(choice){
newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter data: "); scanf("%d", &newnode->data);
 newnode->link=NULL;
if(head==NULL) head=temp=newnode;
else {temp->link=newnode; temp=newnode;}
printf("Enter a choice-");
printf("\n 0 to exit \n 1 to renter data ");
scanf("%d", &choice);
}

printf("Now traversing the data that we entered\n");
temp=head; 
while(temp!=NULL){
printf("%d ", temp->data);
temp=temp->link;
}
}

