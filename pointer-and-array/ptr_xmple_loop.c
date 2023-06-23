#include<stdio.h>
int main(){
    int nmbr[4] = {25, 50, 100, 200};
    int *ptr = nmbr;
    int i;

    for(i = 0; i<4; i++){
        printf("%d -> ", *(ptr+i));
    }
    return 0;
}