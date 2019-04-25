#include<stdio.h>
#include<string.h>
void getFunction();
void fgetsFunction();
void putsFunction();
void stringFunctions();
int main(){
    //getsFunction();
    //fgetsFunction();
    //putsFunction();
    stringFunctions();
    return 0;
}
void getsFunction(){

    //using gets() function
    char s[30];
    printf("Enter your name:\n");
    gets(s);

    printf("Your name is : %s\n", s);
}
void fgetsFunction(){
    char str[20];

    printf("Enter your job designation: \n");
    fgets(str,20,stdin);
    printf("Your job designation is :%s",str);
}
void putsFunction(){
    char company[30];
    printf("Please enter your company:\n");
    gets(company);
    puts(company);
}
void stringFunctions(){
    char str1[30];
    char str2[20];
    printf("Enter string 1 :\n");
    scanf("%s",str1);
    printf("Enter string 2 :\n");
    scanf("%s",str2);
    printf("length of string : %d\n",strlen(str1));
    //printf("str2 to uppercase: %s\n",strupr(str2));
    //printf("str2 to lowercase: %s\n",strlwr(str2));
    //printf("reverse of string 1: %s\n",strrev(str1));
    printf("comparing string 1 with string 2:%d\n",strcmp(str1,str2));
    printf("concatinating first string to second string : %s\n", strcat(str1,str2));

}

