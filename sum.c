#include<stdio.h>
int main(){
int n , p ;
printf("Enter starting number : ");
scanf("%d",&n);
printf("Enter ending number : ");
scanf("%d",&p);
int sum = 0;
for (int i = n ; i <= p ; i++){
    sum = sum + i;
}
printf("The sum is %d.\n",sum);
return 0 ;
}
