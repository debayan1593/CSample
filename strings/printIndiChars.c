#include<stdio.h>
int main(){
    char text[100];
    int i;
    printf("\nPlease enter a string\n");
    gets(text);
    printf("\nEntered string is :\n");
    for(int i = 0; text[i]!='\0';i++){
        printf("%c\n-", text[i]);
    }
    printf("\n");
    return 0;
}