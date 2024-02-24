#include <stdio.h>
float sum(float a, float b);
float mul(float a, float b);
float sub(float a , float b);
float divi(float a , float b);
int main() {
    float a, b;
    int f ;
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter function number to be performed : ");
    scanf("%d",&f);
    if (f == 1){
       printf("The sum is %.2f.\n", sum(a, b));  
    }
    else if(f == 2){
     printf("The product is %.2f.\n", mul(a,b));   
    }
    else if(f == 3){
     printf("The difference is %.2f.\n", sub(a, b)); 
    }
    else if(f == 4){
    printf("The quotient is %.2f.\n", divi(a, b));
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}
float sum(float a, float b) {
    return a + b;
}
float mul(float a, float b) {
    return a * b;
}
float sub(float a , float b){
    return a-b;
}
float divi(float a , float b){
    return a/b;
}
