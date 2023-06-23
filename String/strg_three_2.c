#include<stdio.h>
#include<string.h>
int main(){
    char a[] = "Bangladesh";
    char b[] = "Dhaka";

    strcpy(a, b);
    printf("The value of a is %s\n",a);
   

    return 0;
}