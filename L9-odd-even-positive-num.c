#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number > 0) {
        if (number % 2 == 0) {
            printf("%d is an even number.\n", number);
        } else {
            printf("%d is an odd number.\n", number);
        }
    } else {
        printf("Error: Entered number is not positive.\n");
    }

    return 0;
}