#include<stdio.h>
#include<stdlib.h>
struct node { int data; struct node *next;};
struct node *top=NULL;
void push(){
 struct node *newnode;
 newnode=(struct node *)malloc(sizeof(struct node)); printf("Enter data: "); scanf("%d", &newnode->data);
 newnode->next=top; top=newnode;
}
void display(){
	struct node *temp=top; if(top==NULL) printf("Stack is empty");
	else { while(temp!=NULL) {printf("%d ", temp->data); temp=temp->next;}}
	printf("\n");
} 
void peek(){
	if(top==NULL) printf("Stack is empty");
	else printf("\nTop element is %d", top->data);
}
void pop(){
	struct node *temp;
	if(top==NULL) printf("Underflow");
	else{ temp=top; top=top->next; free(temp);}
}


int main(){
	int choice=1; while(choice!=0){
		printf("Enter your choice\n1. Push operation\n2. Pop operation\n3. Display the elements\n4.Peek operation\n"); scanf("%d", &choice);
		switch(choice){
		case 1: push();break;
		case 2: pop(); break;
		case 3: display(); break;
		case 4: peek(); break;
		default: printf("Invalid Choice");
		}
		printf("Do you want to continue?\nPress 0 to exit\nPress 1 to continue");
		scanf("%d", &choice);
	}

}
