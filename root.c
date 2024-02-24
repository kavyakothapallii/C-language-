#include <stdio.h>

double sqrt_custom(double n);

int main() {
    double num;

    printf("Enter a non-negative number: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Undefined for negative numbers.\n");
    } else {
        printf("Square root: %.4lf\n", sqrt_custom(num));
    }

    return 0;
}

double sqrt_custom(double n) {
    double g = 1.0;
    for (int i = 0; i < 5; i++) {
        g = 0.5 * (g + n / g);
    }
    return g;
}
