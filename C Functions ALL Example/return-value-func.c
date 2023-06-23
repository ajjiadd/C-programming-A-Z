#include<stdio.h>
int myfunc(int x){
    return 5 + x;
}
float myfunc2(float y){
    return y + 0.50;
}
int main(){
    printf("your 1st function's value is : %d\nyour 2nd function's value is : %.2f", myfunc(20), myfunc2(3.40));
    return 0;
}