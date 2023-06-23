#include<stdio.h>

int sum(int p, int q){
    int addition = p + q;
    return addition;
}

void hi(){
    printf("Hellow AJ,\nWhere are you?");
}


int main(){
    hi();
    int result = sum(100, 500);
        printf("\nThe Results is = %d", result);

    return 0;
}