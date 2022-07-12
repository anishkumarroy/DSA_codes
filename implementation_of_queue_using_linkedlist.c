#include<stdio.h>
#include<stdlib.h>
struct node {int data; struct node *next;};
struct node *front=NULL, *rear=NULL;
void enqueue();
void dequeue();
void peek();
int main(){
	int choice=1; while(choice){
	printf("Press 1 to enqueue\nPress 2 to dequeue\nPress 3 to peek\nPress 0 to exit\n"); scanf("%d", &choice);
	switch(choice){
	case 0: exit(0); break;
	case 1: enqueue(); break;
	case 2: dequeue(); break;
	case 3: peek(); break;
	}
	}
}
void enqueue(){
	 printf("Enter data: "); struct node *newnode=(struct node *)malloc(sizeof(struct node)); scanf("%d", &newnode->data);
	if(front==NULL && rear==NULL) front=rear=newnode;
	else rear->next=newnode; rear=newnode;
}
void dequeue(){
if(front==NULL && rear==NULL) printf("Queue is empty");
else if(front==rear) {struct node *temp=rear; front=rear=NULL; free(temp);}
else { struct node *temp=front; front=front->next; free(temp);}
}
void peek(){
	if(front==NULL && rear==NULL) printf("Queue is empty");
	else printf("%d\n", front->data);	
}


