#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next; 
};
//insert to the START of the list
void push(struct Node** head_ref, int new_data){
    //here **head_ref receives value &head or address of head
    //and *head_ref is the value stored in head i.e., NULL
    //allocate new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    //assign data for new node
    new_node->data = new_data;

    //assign next for new node
    new_node->next = (*head_ref);

    //assign new_node to heaad_ref
    //value stored inside head becomes the address of pointer new_node
    //so head now points to address stored in pointer new_node
    (*head_ref) = new_node;  
}

//insert after a p[articular node
void insertAfter(struct Node* prev_node, int new_data){

    if(prev_node == NULL){
        printf("the given previous node cannot be null!");
        return;
    }
    
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;

}

//insert at the end of the list
void append(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    /*define a Node last that is assigned head first and then  iterated to       last*/

    struct Node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;
    
    //if head is null meaning list is empty
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    //iterate thru lsit to find last element
    while(last->next != NULL){
        last = last->next;
    }

    
    last->next = new_node;
    return;
}

void printList(struct Node *node){
    while(node!=NULL){
       printf("%d",node->data);
       node = node->next;
    }
    return;
}    
int main(){
    struct Node *head = NULL;
    //printf("head from main #1:%p\n", *head);

    append(&head,6);
    //printf("head from main #2:%p\n", *head);
    //now head has a value which points to a new_node with value 6
    push(&head,7);
    //printf("head from main #3:%p\n", *head);
    push(&head,1);
    //printf("head from main #4:%p\n", *head);

    append(&head,4);
    //printf("head from main #5:%p\n", *head);

    insertAfter(head->next, 8); 
    //printf("head from main #6:%p\n", *head);
    
    printf("\nCreated linkedlist is:\n");
    printList(head);
    return 0;
}
