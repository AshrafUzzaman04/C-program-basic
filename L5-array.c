#include <stdio.h>


int main(){

        // array example
    char hellow[5][10] = {"ashraf", "bithi", "cat", "dog", "eag"};
    
    for(int i = 0; i < 5 ; i++){
        printf("%s\n", hellow[i]);
    }
    
    // array example
    float marks[10];
    int i,n;
    float sum = 0;
    printf("Enter your total subject: ");
    scanf("%i", &n);
    
    for(i = 1; i <= n; i++){
        scanf("%f", &marks[i]);
    }
    for(i = 1; i <= n; i++){
        sum += marks[i];
    }
    
    printf("average number: %f", sum/n);

    return 0;
}