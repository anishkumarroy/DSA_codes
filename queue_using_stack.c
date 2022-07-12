#include<stdio.h>
#include<stdlib.h>
int top1=-1, top2=-1;
void dequeue(int s1[], int s2[], int n); void display(int s1[]); void peek(int s1[], int n);
void enqueue(int s1[],  int n);
int main(){
    int n; printf("Enter the size: "); scanf("%d", &n); int s1[n], s2[n]; int choice=1; while(choice){ printf("Enter your choice:\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
    scanf("%d", &choice);
    switch(choice){
    case 1: enqueue(s1,n); break;
    case 2: dequeue(s1,s2,n); break;
    case 3: peek(s1,n);  break;
    case 4: display(s1); break;
    case 5: exit(0); break; default: printf("invalid choice\n");}
    }
}
void enqueue(int s1[],  int n){
if(top1==n-1) printf("Queue is full");
 else {int x; printf("Enter data: "); scanf("%d", &x);top1++; s1[top1]=x;}

}
void dequeue(int s1[], int s2[], int n){
    if(top1==-1) printf("Queue is empty\n");
    else { int i; for(i=top1; i>=0; i--){ top2++; s2[top2]=s1[i];}
        top2--; top1=-1;
        for(i=top2; i>=0; i--) { top1++; s1[top1]=s2[i];} top2=-1;
    }
    printf("%d\n" , top1);
    
}
void peek(int s1[], int n){ if (top1==n-1) printf("Queue is empty\n");
else printf("%d\n", s1[0]);
}
void display(int s1[]){ 
    int i; for(i=0;i<=top1; i++) printf("%d ", s1[i]);
}
