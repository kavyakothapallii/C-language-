#include <stdio.h>

int printFibonacci(int n);

int main() {
    int t;
    printf("Enter the number in the Fibonacci series: ");
    scanf("%d", &t);
    printf("Fibonacci Series: ",t);
    printFibonacci(t);

    return 0;
}
int printFibonacci(int n) {
    int a = 0, b = 1, next;

    while (a<=n) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0 ;
}
