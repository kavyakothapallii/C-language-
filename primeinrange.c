#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int first, last;
    printf("Enter First Number: ");
    scanf("%d", &first);

    printf("Enter Last Number: ");
    scanf("%d", &last);
    printf("The prime numbers between %d and %d are:\n", first, last);
    for (int n = first; n <= last; n++) {
        if (isPrime(n)) {
            printf("%d\n", n);
        }
    }

    return 0;
}
