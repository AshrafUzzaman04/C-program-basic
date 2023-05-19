#include <stdio.h>


int main(){

        // while loop 
    int a = 0;
 while(a <= 10 ){
    if(a % 2 == 0){
        if(a == 8)
        printf("Even: %i\n", a);
    }
    ++a;
}

  // do while loop
  int try = 0;
   do{
       printf("number : %i\n", ++try);
   } while (try < 10);
    
    
    // for loop 
    for (int num = 0; num <= 10; ++num){
        printf("for loop number: %d\n", num);
    }
    
    
    // multiplication result
    for(int kotoGhorer = 10; kotoGhorer <= 13 ; kotoGhorer++){
        for(int gunon = 1; gunon <=10; gunon++){
            printf("%i x %i = %i\n", kotoGhorer,gunon,kotoGhorer*gunon);
        }
        printf("\n");
    }
    
    // shape desgin by loop
    for(int star = 12; star >= 1; star--){
        for(int stars = 1; stars <= star; stars++){
        printf("*");
        }
        printf("\n");
    }

    return 0;
}