#include <stdio.h>

int main() {
	
    int n , digit , sum;
    scanf("%d", &n);
    if  (n >= 10000 && n <= 99999){
      while(n!=0){
          digit = n % 10; 
        sum += digit;        
        n /= 10;
      }
    scanf("%d",&sum);
    printf("%d",sum);
    }
    return 0;
}
