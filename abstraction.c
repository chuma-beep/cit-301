// abstractions in c include
// functions
// header files
// structs with functions pointers
// opaque pointers
// modular programming

// the point of abstraction is to hide unnecessary details.
// allowing you to focus on what a system does rather than how it does it
// we can achieve this by grouping statements into operational units with
// contracts of their own.

// we will only work with functions for now with two examples

// 1. functions
// a notable form of abstraction is the printf. we don't need to know what it
// does internally to print text to console

// eg 1.
// a function to select the largest of 3 numbers
#include <stdio.h>
float large(float a, float b, float c) {
 if (a >= b && a >= c)
    return a;
  else if (b >= a && b >=)
    return b;
  else
    return c;
}

int main() {
  float num1, num2, num3, largest;
  printf("Enter three numbers: ");
  scanf("%f %f %f", &num1, &num2, &num3);
  largest = large(num1, num2, num3);
  printf("largest number = %.2f", largest);
  return 0;
}
