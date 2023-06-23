#include<stdio.h>
int main(){
    char fullname[30];
    printf("Type your Fullname: \n");

    fgets(fullname, sizeof(fullname), stdin);

    printf("Hello!\n%s", fullname);
    return 0;
}