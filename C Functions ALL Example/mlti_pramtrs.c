#include<stdio.h>

void func(char name[], int age){
    printf("Hello, %s\n You are %d years old.\nThank you!", name, age);
}

int main(){
    func("jiad", 19);
    return 0;
}