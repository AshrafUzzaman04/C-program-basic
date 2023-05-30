#include <stdio.h>

int main(){
    float c, f;
    
    printf("Enter a random celsius number:");
    scanf("%f", &c);
    
    printf("Enter a random Fahrenheit number:");
    scanf("%f", &f);
    
    f = (c*9/5) +32;
    c = (f - 32) * (9/5);
    
    printf("Temperature in Fahrenheit:%f\n", f);
    printf("Temperature in Celsius:%f\n", c);
    return 0;
}