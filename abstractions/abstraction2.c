// second part of the abstracion example

#include <stdio.h>

// function declaration (interface)
unsigned long long factorial(int n);

// function definition (implementation)
unsigned long long factorial(int n) {
  if (n < 0 || n > 20) {
    return 0;
  }
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  unsigned long long result = factorial(num);

  if (result == 0) {
    printf("Error the number is too large or negative.\n");
  } else {
    printf("Factorial of %d is %llu\n", num, result);
  }
  return 0;
}
