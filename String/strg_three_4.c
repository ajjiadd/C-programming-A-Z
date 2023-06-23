#include<stdio.h>
#include<string.h>
int main(){
    char a[] = "Bangladesh";
    char b[] = "Dhaka";

    strcat(b, a);
    printf("The value of a is %s\n",b);
   

    return 0;
}