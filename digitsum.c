#include <stdio.h>

int digitsum(int n);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int sum = digitsum(num);

    printf("The sum of the digits of %d is: %d\n", num, sum);

    return 0;
}

int digitsum(int n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum = sum + digit;
        n /= 10;
    }
    return sum;
}
