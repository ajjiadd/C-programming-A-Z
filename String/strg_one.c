#include<stdio.h>
int main(){
    printf("\nEnter your name: ");
    char myName[20];
        gets(myName);
    printf("\n\nResults:\n\n");
    printf("Hello, %s\nHow can I help you?\nIf you need any help, Contract: ajcity30@gamil.com\n",myName);

    return 0;
}