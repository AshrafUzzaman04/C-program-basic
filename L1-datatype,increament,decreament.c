#include <stdbool.h>
#include <stdio.h>
#define pI 3.1416

const float pi = 3.1416;
const char *string = "dubai";
const int integer = 5;
const bool booliean = true;
const void *null = NULL;
const long int longNumber = 99999999;

int
main ()
{
    
  printf ("%f\n", pI);
  printf ("%f\n", pi);
  printf ("%s\n", string);
  printf ("%i\n", integer);
  printf ("%d\n", booliean);
  printf ("%p\n", null);
  printf ("%ld\n", longNumber);
  
  
  int x = 5;
  int y = 32;

  printf ("%d\n", ++x);
  printf ("%d\n", y);
  printf ("%d\n", y--);

  return 0;
}