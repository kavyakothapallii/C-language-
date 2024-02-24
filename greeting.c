#include<stdio.h>
void Indian();
void French();
int main(){
char c ;
printf("Indian or French ? : ");
scanf("%s",&c);
if (c=='I'){
    Indian();
}
else if (c=='F'){
    French();
}
else{
    printf("Invalid Input");
}
return 0 ;
}
void Indian(){
    printf("Namaste");
}
void French(){
    printf("Bonjour");
}
