#include<stdio.h>
int power(int base , int exponent);

int main(){
    int b , e ;
    printf("Enter base :");
    scanf("%d",&b);
    printf("Enter exponent :");
    scanf("%d",&e);
    printf("%d",power(b,e));
    return 0 ;
    
}
int power(int base , int exponent){
    int result = 1;
    for(int i = 0 ; i<exponent;i++){
        result = result * base;
    }
    return result ; 
}
