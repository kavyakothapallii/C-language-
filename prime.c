#include <stdio.h>

int main() {
    int n;
printf("Enter a number: ");
    scanf("%d", &n);

    int p = 1;

    if (n <= 1) {
        p = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                p = 0;
                break;
            }
        }
    }

    if (p == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
   

    return 0;
}
