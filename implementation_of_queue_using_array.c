#include<stdio.h>
int front=-1,rear=-1;
int enqueue(int x,int size, int queue[]);
int dequeue();
int display(int queue[]);
int peek(int queue[]);

int main(){
	int size; printf("Enter the size of the array: "); scanf("%d", &size); int queue[size]; int choice=1; while(choice!=0){
	printf("What do you want to perform?\n1. Enqueue\n2. Dequeue\n3. Display\n4. Peek"); scanf("%d", &choice);
	switch(choice){
		case 1: printf("Enter the element, that you want to insert: "); int x; scanf("%d", &x); enqueue(x, size, queue);break;
		case 2: dequeue(); break;
		case 3: display(queue); break;
		case 4: peek(queue); break;
		default: printf("Invalid Choice: "); break;
	}
	printf("Do you want to continue? If yes press 1, either press 0: "); scanf("%d", &choice);}
}
int enqueue(int x, int size, int queue[]){
	if(rear==size-1) printf("Overflow");
	else if(front==-1 && rear==-1) {front=rear=0; queue[rear]=x;}
	else {rear++; queue[rear]=x;}
}
int dequeue(){
	if(front==-1 && rear==-1) printf("Underflow");
	else if(front==rear) front=rear=-1;
	else front++;
}
int display(int queue[]){
	if(front==-1 && rear==-1) printf("Queue is empty");
	else{ int i=front; for(i; i<=rear; i++) printf("%d ", queue[i]);}
}
int peek(int queue[]){
	if(front==-1 && rear==-1) printf("Queue is empty");
	else printf("%d", queue[front]);
}

