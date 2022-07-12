#include<stdio.h>
#include<stdlib.h>
int front=-1, rear=-1;
void enqueue(int queue[], int n);
void dequeue(int queue[], int n);
void peek(int queue[]);
void display(int queue[], int n);
int main(){
    int n;printf("Enter the size of the array: "); scanf("%d", &n); int queue[n];
    int choice=1; while(choice){ printf("Enter your choice:\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n"); scanf("%d", &choice);
    switch(choice){
    case 1: enqueue(queue, n); break;
    case 2: dequeue(queue, n); break;
    case 3: peek(queue); break;
    case 4: display(queue, n); break;
    case 5: exit(0); break;
    default: printf("Invalid choice");
    }
    }
}
void enqueue(int queue[],int n){ printf("Enter the element: "); int x; scanf("%d", &x);
if (front==-1 && rear==-1) {front=rear=0; queue[rear]=x;}
else if((rear+1)%n==front) printf("Queue is full\n");
else { rear=(rear+1)%n; queue[rear]=x;}
}

void dequeue(int queue[], int n){
if(front==-1 && rear==-1) printf("Queue is empty\n");
else if(front==rear) front=rear=-1;
else front=(front+1)%n;
}

void peek(int queue[]){
if(front==-1 && rear==-1) printf("Queue is empty\n");
else  printf("%d\n", queue[front]);
}

void display(int queue[], int n){
if(front==-1 && rear==-1) printf("Queue is empty\n");
else if(front==rear) printf("%d", queue[rear]);
else { int i=front; while(i!=rear) {printf("%d ", queue[i]); i=(i+1)%n;} printf("%d\n", queue[i]);}

}
