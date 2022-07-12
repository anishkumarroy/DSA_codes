#include<stdio.h>
#include<stdlib.h>
struct node {int data; struct node *next;} *tail=NULL;
void insert_at_beg();
void insert_at_end();
void insert_at_specific_posn(int n);
void delete_from_beg();
void delete_from_end();
void delete_from_specific_posn(int n);
void display();
int main(){
int choice=1; struct node *newnode; while(choice){printf("Enter data: "); newnode=(struct node *)malloc(sizeof(struct node)); 
	scanf("%d", &newnode->data); 
	if(tail==NULL) {tail=newnode; newnode->next=tail;}
	else{ newnode->next=tail->next; tail->next=newnode; tail=newnode;}
	printf("If you want to continue press 1 either press 0: \n"); scanf("%d", &choice);}
	do{
	printf("\nPress 1 to insert node at beginning\nPress 2 to insert node at end\nPress 3 to insert at any intermediate posn\nPress 4 to display the elements\nPress 5 to delete from beginning\nPress 6 to delete from end\nPress 7 to delete from a specific position\nPress 0 to exit\n"); scanf("%d", &choice); int n;
	switch(choice){
	case 1: insert_at_beg();break;
	case 2: insert_at_end();break;
	case 3: printf("Enter the position in which you want to insert: "); scanf("%d", &n); insert_at_specific_posn(n); break;
	case 4: display(); break;
	case 5: delete_from_beg(); break;
	case 6: delete_from_end(); break;
	case 0: exit(0); break;
	case 7: printf("Enter the position from where you want to delete the element: "); scanf("%d", &n); delete_from_specific_posn(n); break;
	default: printf("Invalid Choice"); break;
	}
	}while(choice);
}
void insert_at_beg(){
printf("Enter data: "); struct node *newnode; newnode=(struct node *)malloc(sizeof(struct node)); scanf("%d", &newnode->data); newnode->next=tail->next; tail->next=newnode;
}
void insert_at_end(){
printf("Enter data: "); struct node *newnode; newnode=(struct node *)malloc(sizeof(struct node)); scanf("%d", &newnode->data);newnode->next=tail->next; tail->next=newnode; tail=newnode;
}
void insert_at_specific_posn(int n){if(n==1) insert_at_beg(tail);
	else{
	struct node *temp, *newnode;newnode=(struct node *)malloc(sizeof(struct node)); printf("Enter data: "); scanf("%d", &newnode->data); temp=tail->next; int i=1; while(i!=n-1){temp=temp->next;i++;} newnode->next=temp->next; temp->next=newnode;}
}
void display(){
	struct node *temp; temp=tail->next; do{printf("%d ", temp->data); temp=temp->next;}while(temp!=tail->next);
}
void delete_from_beg(){
	struct node *temp=tail->next; tail->nexvoid insert_at_end(struct node *tail){
printf("Enter data: "); struct node *newnode; newnode=(struct node *)malloc(sizeof(struct node)); scanf("%d", &newnode->data);newnode->next=tail->next; tail->next=newnode; tail=newnode;
}t=tail->next->next; free(temp);
}

void delete_from_specific_posn(int n){
	if(n==1) delete_from_beg(tail); else{struct node *temp=tail->next; int i=1; while(i!=n-1) {temp=temp->next; i++;}
	struct node *temp1; temp1=temp->next; temp->next=temp1->next; free(temp1);}
}
void delete_from_end(){
	struct node *temp=tail->next; while(temp->next!=tail) temp=temp->next; 
	struct node *end=tail; temp->next=tail->next; tail=temp; 
}
