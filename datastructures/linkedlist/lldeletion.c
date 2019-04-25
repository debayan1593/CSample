#include<stdio.h>
struct Node{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data){
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(struct Node **head_ref, int key){

    struct Node* temp = *head_ref, *prev;
    //if head_ref has the key then free that memory
    if(temp!=NULL && temp->data==key){
        *head_ref = temp->next;
        free(temp);
        return;
    }
    /*if head_ref does not have the key then look for the node that does have it*/
    while(temp!=NULL && temp->data!=key){
        prev = temp;
        temp = temp->next;
    }

    if(temp==NULL)
        return;

    prev->next = temp->next;
    free(temp);

    
}
void printList(struct Node *node){
    while(node !=NULL){
        printf("%d",node->data);
        node = node->next;
    }
}
int main(){
    struct Node *head = NULL;
    push(&head,7);
    push(&head,1);
    push(&head,3);
    push(&head,2);
    printf("\nCreated Linked List\n\n");
    printList(head);
    deleteNode(&head,1);
    printf("\nLinked List after deletion of 1\n\n");
    printList(head);
    return 0;
}