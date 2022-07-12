#include<stdio.h>
#include<stdlib.h>
struct node { int data; struct node *next;};
struct node *front=NULL, *rear=NULL;
void enqueue(); void dequeue(); void peek(); void display();
int main(){
    int choice=1; while(choice){ printf("Enter your choice:\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n"); scanf("%d", &choice);
    switch(choice){
    case 1: enqueue(); break;
    case 2: dequeue(); break;
    case 3: peek(); break;
    case 4: display(); break;
    case 5: exit(0); break;
    default: printf("Invalid Choice"); break;
    }
    }
}
void enqueue(){ struct node *newnode=(struct node *)malloc(sizeof(struct node)); printf("Enter data: ");
    scanf("%d", &newnode->data);
    if(front==NULL && rear==NULL) {front=rear=newnode; rear->next=front; }
    else { newnode->next=front; rear->next=newnode; rear=newnode; }
}
void dequeue(){ 
if(front==NULL && rear==NULL) printf("Queue is empty\n");
else if(front==rear) front=rear=NULL;
else {struct node *temp=front; front=front->next; free(temp);}
}
void peek(){
 if(front==NULL && rear==NULL) printf("Queue is empty\n");
 else{ printf("%d\n", front->data); }
}
void display(){
    struct node *temp=front;   do { printf("%d ", temp->data); temp=temp->next;}while(temp!=rear->next);
}
