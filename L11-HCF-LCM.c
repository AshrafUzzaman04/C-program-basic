#include <stdio.h>

// Function to calculate HCF (GCD)
int calculateHCF(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return calculateHCF(num2, num1 % num2);
}

// Function to calculate LCM
int calculateLCM(int num1, int num2) {
    int lcm;
    int hcf = calculateHCF(num1, num2);

    lcm = (num1 * num2) / hcf;

    return lcm;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = calculateHCF(num1, num2);
    int lcm = calculateLCM(num1, num2);

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}