#include<stdio.h>
int main(){
    int x, y, z;
    x = 100; y = 200; z = 300;
    int *p1 = &x, *p2 = &y, *p3 = &z, sum;

    sum = *p1 + *p2 + *p3;
    printf(" The sum of value is: %d\n", sum);


    return 0;
}