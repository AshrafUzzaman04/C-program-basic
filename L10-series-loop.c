#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
        // sum = sum + i;
    }

    printf("The sum of the series is: %d\n", sum);

    for (int i = 2; i <= 10; i += 2) {
        int square = i * i;
        sum2 += square;
        // sum2 = sum+(i*i);
    }

    printf("The sum of the series is: %d\n", sum2);

    return 0;
}