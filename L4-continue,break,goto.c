#include <stdio.h>


int main(){

    // use of continue, break, goto 
    int a = 1;
    while(a <= 10){
         a++;
        if(a == 5){continue;}
        if(a== 9){break;}
       printf("%i\n", a);
    }
    
    printf("\nState 1\n");
    printf("State 2\n");
    goto last;
    
    printf("State 5");
    printf("State 6");
    last:
    
    return 0;
}