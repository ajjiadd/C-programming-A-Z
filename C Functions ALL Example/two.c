#include<stdio.h>
void print_divisor(int x){
    int i;
    for(i = 1; i <= x; i++){
        if(x % i == 0){
            printf(" %d",i);
        }
    }
}
int main(){
    printf("All the divisors are mentioned bellow:\n");
    print_divisor(100);
    return 0;
}