#include <stdio.h>

int main() {
    int num, i;
    unsigned long long product = 1; 

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            product *= i;
        }

        printf("Product = %llu\n", product);
    }

    return 0;
}

