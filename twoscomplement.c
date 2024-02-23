#include<stdio.h>
int main(){
int n ;
printf("Enter the number of bits :");
scanf("%d",&n);
char bin [n+1];
char ones [n+1];
char twos [n+1];
int carry = 1 ;
printf("Enter the binary number to find ones complement for :");
scanf("%s",bin);
printf("%s",bin);
printf("\nThe ones complement is : ");
for(int i = 0 ; i < n ; i ++){
    if (bin[i]=='0'){
        ones[i]='1';
    }
    else if(bin[i]=='1'){
    ones[i]='0';
    }
    else{
    ones[i]='\0';
    }
}
printf("%s", ones);
printf("\nThe twos complement is : ");
carry = 1;

for(int i = n-1; i >= 0 ; i --){
    if (ones[i]=='1' && carry == 1){
        twos[i]='0';
    }
    else if(ones[i]=='0' && carry == 1){
        twos[i]='1';
        carry = 0;
    }
    else{
        twos[i]=ones[i];
    }
}
twos[n]='\0';
printf("%s",twos);
return 0 ;
}
