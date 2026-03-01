#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n < 0) {
        return -1; // Invalid input
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);
    
    int fact = factorial(num);
    
    if (fact == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, fact);
    }
    
    return 0;
}
