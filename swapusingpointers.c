#include<stdio.h>
int _swap(int *a , int *b);
int main(){
    int x = 5 , y = 3 ;
    _swap(&x,&y);
    printf("x = %d , y = %d ",x,y);
    return 0 ;
}
int _swap(int *a , int *b){
    int t = *a;
        *a = *b;
        *b = t;
    return 0 ;
}
