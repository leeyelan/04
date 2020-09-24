#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int input;
  int hour;
  int min;
  int second;
  
 
  
  printf("input the second: ");
  scanf("%i",&input);
  
  second = input%60;
  min = (input%3600)/60;
  hour = input/3600;
  
  printf("The time for %i second is %i : %i : %i ", input, hour, min, second);
  

  

	return 0;
}
