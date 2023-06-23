#include<stdio.h>
#include<string.h>
int main(){
    char a[] = "Bangladesh";
    char b[] = "Dhaka";

    int x = strcmp(a, b);
    if(x == 0){
        printf("Equal");
    }else{
        printf("Not Equal");
    }
   

    return 0;
}