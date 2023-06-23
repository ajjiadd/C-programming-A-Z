#include<stdio.h>
int main(){
    int a[]= {1,2,3,4,5,6,7,8,9};
    int i;
    int search_item = 6;

    for( i = 0; i < 9; i++ ){
        if (search_item==a[i])
        {
            printf("Here is your value: %d",a[i]);
            return 0;
        }else
        printf("Value is not founded \n");
        
    }
    return 0;
}