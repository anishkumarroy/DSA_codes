#include<stdio.h>
//we will implement stack using array i.e. static memory allocation
#define N 5
int stack[N]; int top=-1;
void push();
void pop();
void peek();
void display();
int main(){ 
	int choice=1; while(choice){ push(); printf("Enter your choice: "); scanf("%d", &choice);}
	
	peek(); display();
} 
//It is just a rough implementation of all the basic operations, we can use switch case to call the functions as the user wants.
void push(){
	int x; printf("Enter data: "); scanf("%d", &x);
	if(top==(N-1)) printf("Overflow");
	else{ top++; stack[top]=x;}
}
void pop(){
	if(top==-1) printf("Underflow");
	else {top--;}
}
void peek(){
	if(top==-1) printf("Stack is empty");
	else printf("%d", stack[top]);
}
void display(){
	int i; for(i=top;i>=0;i--) printf("%d", stack[i]);
}
