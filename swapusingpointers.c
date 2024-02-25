#include<stdio.h>
int swap(int a , int b);
int _swap(int *a , int *b);
int main(){
    int x = 5 , y = 3 ;
    printf("x = %d , y = %d ",x,y);
    _swap(&x,&y);
    return 0 ;
}
int _swap(int *a , int *b){
    int t = *a;
        *a = *b;
        *b = t;
    return 0 ;
}
int swap(int a , int b){
    int t = a;
        a = b;
        b = t;
    printf("a = %d , b = %d ",a,b);
    return 0 ;
}
