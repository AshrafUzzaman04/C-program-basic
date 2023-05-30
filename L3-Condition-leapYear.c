#include <stdio.h>


int main(){
      //student marks
  float marks;
  printf ("Enter your marks: ");
  scanf ("%f", &marks);

  if (marks <= 100 && marks >= 80){
      printf ("Grade: A+\n");
    }else if (marks <= 79 && marks >= 60){
      printf ("Grade: A\n");
    }else if (marks >= 50 && marks <= 59){
      printf ("Grade: A-\n");
    }else if (marks < 50){
      printf ("Grade: Fail\n");
    }else{
      printf ("Incorrect Number\n");
    }
    

// leap year program style one
  int year;
  printf ("Enter a year: ");
  scanf ("%i", &year);

  if (year % 4 == 0){
      if (year % 100 == 0){
	  if (year % 400 == 0){
	      printf ("%i is a Leap year\n", year);
	    }else{
	      printf ("%i is not a Leap year\n", year);
	    }
	}else{
	  printf ("%i is a Leap year\n", year);
	}
  }else{
      printf ("%i is not a Leap year\n", year);
    }
    
    
    // leap year program style two
    int yearTwo;
    printf("Enter a year again: ");
    scanf("%d", &yearTwo);
    
    if((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0){
        printf("%d is a leap year", yearTwo);
    }else{
        printf ("%d is not a Leap year\n", yearTwo);
    }

    return 0;
}