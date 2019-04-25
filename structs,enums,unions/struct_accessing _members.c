#include<stdio.h>
struct Book{
    int price;
    char name[20];
    char author[20];
};

int main(){
    struct Book catch22 = {350, "Black Comedy", "joseph heller"};
    struct Book *ptr;
    ptr = &catch22;
    printf("\nPointer to catch22 :%p",ptr);
    printf("\nprice of book: %d",ptr->price);
    printf("\nname of book: %s",ptr->name);
    printf("\nauthor of book: %s",ptr->author);
    printf("\nSize of ptr : %lu", sizeof(ptr));
    //printf("\nvalue stored at ptr: %p", *ptr);
    return 0;
}
