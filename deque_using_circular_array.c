#include<stdio.h>
#include<stdlib.h>
int front=-1, rear=-1;
void enqueue_front(int deque[], int n);
void enqueue_rear(int deque[], int n);
void display(int deque[], int n);
void getfront(int deque[]){ if(front==-1 && rear==-1 ) printf("Queue is empty\n"); else printf("%d", deque[front]);}
void getrear(int deque[]){if(front==-1 && rear==-1 ) printf("Queue is empty\n"); else printf("%d", deque[rear]);}
void dequeue_front(int deque[], int n){
    if(front==-1 && rear==-1) printf("Queue is empty\n");
    else if (front==rear) front=rear=-1;
    else if(front==n-1) front=0;
    else front++;
}
void dequeue_rear(int deque[], int n){
    if(front==-1 && rear==-1) printf("Queue is empty\n");
    else if (front==rear) front=rear=-1;
    else if (rear==0) rear=n-1;
    else rear--;
}
int main(){
    printf("Enter the size of the array: "); int n; scanf("%d", &n); int deque[n],choice=1; 
    while(choice){printf("Enter your choice:\n1. Enqueue from front\n2. Enqueue from rear\n3. Dequeue from front\n4. Dequeue from rear\n5. Display\n6. Get front\n7. Get rear\n8. Exit"); scanf("%d", &choice);
        switch(choice){
            case 1: enqueue_front(deque,n); break;
            case 2: enqueue_rear(deque,n); break;
            case 3: dequeue_front(deque,n); break;
            case 4: dequeue_rear(deque,n); break;
            case 5: display(deque, n); break;
            case 6: getfront(deque); break;
            case 7: getrear(deque); break;
            
            case 8: exit(0); break;
            default: printf("invalid choice\n");
        }
    }
}
void enqueue_front(int deque[], int n){ printf("Enter the element: "); int x; scanf("%d", &x);
    if(front==(rear+1)%n) printf("Queue is full\n");
    else if(front==-1 && rear==-1) {front=rear=0; deque[front]=x; }
    else if(front==0) {front=n-1; deque[front]=x;}
    else {front--; deque[front]=x;}
}
void enqueue_rear(int deque[], int n){ int x; printf("Enter element: "); scanf("%d", &x);
    if(front==(rear+1)%n) printf("Queue is full\n");
    else if(front==-1 && rear==-1) {front=rear=0; deque[rear]=x;}
    else if(rear==n-1) {rear=0; deque[rear]=x;}
    else {rear++; deque[rear]=x;}
}
void display(int deque[],int n){
int i=front; while(i!=rear){ printf("%d ", deque[i]); i=(i+1)%n;} printf("%d", deque[i]);   
   }

