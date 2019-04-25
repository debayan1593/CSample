//a c program to demonstrate different storage classes
#include<stdio.h>
int x;
void autoStorageClass(){
  printf("\nDemonstrating auto class \n\n");
  auto int a  = 32;
  printf("Value of variable 'a' declared as auto:%d\n",a);
  printf("-----------------------------------");

}
void registerStorageClass(){    
  printf("\nDemonstrating register  class \n\n");
  register char b = 'G';
  printf("Value of variable 'b' declared as register:%d\n",b);
  printf("-----------------------------------");
}
void externStorageClass(){ 
  printf("\nDemonstrating extern class \n\n");
  extern int x;
  printf("value of variable 'x'  declared as extern: %d\n",x);  
  x = 2;
  printf("Modified value of variable 'x'  declared as extern: %d\n",x);
  printf("-----------------------------------");
}
void staticStorageClass(){
  printf("\nDemonstrating static class\n\n");
  printf("Declaring 'y' as static inside the loop.\n"
          "But this declaration will occur only"
          " once as 'y' is static.\n"
          "If not, then every time the value of 'y' "
          "will be the declared value 5"
          " as in the case of variable 'p'\n"); 
  printf("\nLoop started");
  for(int i = 1;i<5;i++){
    static int y = 5;
    int p = 10;
    y++;
    p++;
    printf("\nThe value of 'y' declared as static in %d iteration is %d\n",i,y);     
    printf("\nThe value of non static variable 'p'in %d iteration is %d\n",i,p); 
  }
  printf("\nLoop ended\n");
  printf("------------------------------------");

}


int main(){
  printf("\nA program to demonstrate Storage classes in C\n\n");
  autoStorageClass();
  registerStorageClass();
  externStorageClass();
  staticStorageClass();
  printf("\nStorage classes demonstarted");

  return 0;
}

