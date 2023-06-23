//write a function that takes an integer as input and prints all of its divisors.Call this function from the main function.
#include<stdio.h>
void print_divisor(int x){
    int i;
    for(i = 1; i<=x; i++){
        if(x % i == 0){
            printf(" %d",i);
        }
    }
}
int main(){
    printf("The All divisors are mentioned bellow:\n");
        print_divisor(100);
    return 0;
}



