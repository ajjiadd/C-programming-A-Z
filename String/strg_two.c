#include<stdio.h>
int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s",name);
    int i=0, counter=0;
    while(name[i] != '\0'){
        counter++;
        i++;
    }
    printf("The lenth of tile: %d",counter);


    return 0;

}