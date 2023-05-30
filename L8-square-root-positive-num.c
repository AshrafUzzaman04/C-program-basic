#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    printf("Enter a positive number: ");
    scanf("%lf", &number);

    // Check if the number is positive
    if (number >= 0) {
        squareRoot = sqrt(number);
        printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
    } else {
        printf("Error: Entered number is not positive.\n");
    }

    return 0;
}