#include<stdio.h>
int mutlifunc(int x, int y){
    return x + y;
}
int main(){
    int results = mutlifunc(40 , 5);
    printf("Your Function's value is: %d", results);
    return 0;
}