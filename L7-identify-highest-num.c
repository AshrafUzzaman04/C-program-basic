#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter your first number: ");
    scanf("%d", &a);
    
    printf("Enter your second number: ");
    scanf("%d", &b);
    
    printf("Enter your third number: ");
    scanf("%d", &c);
    
    if (a > b) {
        if (a > c) {
            printf("%d is the highest number\n", a);
        } else {
            printf("%d is the highest number\n", c);
        }
    } else {
        if (b > c) {
            printf("%d is the highest number\n", b);
        } else {
            printf("%d is the highest number\n", c);
        }
    }
    
    return 0;
}