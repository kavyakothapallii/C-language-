#include<stdio.h>
float percentage (float science , float math , float sanskrit);
int main(){
    float science , math , sanskrit ;
    printf("Enter science marks out of 100 : ");
    scanf("%f",&science);
    printf("Enter math marks out of 100 : ");
    scanf("%f",&math);
    printf("Enter sanskrit marks out of 100 : ");
    scanf("%f",&sanskrit);
    float p ;
    p = percentage(science,math,sanskrit);
    if (science>100 || math>100 || sanskrit>100){
        printf("Invalid Input. ");
    }
    else{
         printf("The percentage secured is :%.2f%\n",p);
    }
    return 0 ;
    
}
float percentage (float science , float math , float sanskrit){
    float p ;
    p = ((science + math + sanskrit) /300)*100;
        
    return p ;
    
}
