#include <stdio.h>

int main () {
  int n = 5;

  for (int i = 0; i <= 10; i++)
    {
        if (i == n) {
            printf ("Your number is: %d \n", i);
            continue;
        }
        printf ("Your number is not: %d \n", i);
    }
    
  return 0;
}