#include<stdio.h>
int exfunc(int x,int y){
    return x + y;
}
int main(){
    printf("Your function value is: %d\n", exfunc(5, 40));
    return 0;
}