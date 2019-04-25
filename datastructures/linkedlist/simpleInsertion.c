#include<stdio.h>
#include<stdlib.h>
//declare function to insert new nodes
void insertNode(int data);
void printNodes();
void deleteNode(int deldata);
//define a global struct Node head
struct Node *head;
//define a struct type 
struct Node{
	int data;
	struct Node *next;
};
int main(){
	head = NULL;
	insertNode(2);
	insertNode(7);
	insertNode(3);
	insertNode(8);
	insertNode(9);
	insertNode(12);
	printNodes();
    deleteNode(7);
    printNodes();
	return 0;
}
void insertNode(int new_data){
	//initialise a new node
	struct Node *new_node = (struct Node* )malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}
void printNodes(){
	struct Node *last = head;
	while(last!=NULL){
		printf("%d\n",last->data);
		last = last->next;
	}
}
void deleteNode(int deldata){
    struct Node *temp = head, *prev;
    if(temp != NULL && temp->data == deldata){
        head = temp->next;
        free(temp);
        printf("Free temp is :%p\n",temp);
        return;
    }
    while(temp!=NULL && temp->data!=deldata){
        prev = temp;
        temp = temp->next;
    }
    if(temp==NULL)
        return;
    prev->next = temp->next;
    free(temp);
}
