#include<stdio.h>
int main(){
int n ; 
printf("Enter Number: ");
scanf("%d",&n);
do{
break;
} while(n%2 == 1);
while(n%2==0){
printf("Enter Number: ");
scanf("%d",&n);  
}
return 0 ;
}
