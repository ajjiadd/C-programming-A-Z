#include<stdio.h>
void loopary(int ary[10]){
    int i;
    for(i = 0; i < 10; i++){
        printf("%d->",ary[i]);
    }
}
int main(){
    int  ary[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    loopary(ary);
    return 0;
}