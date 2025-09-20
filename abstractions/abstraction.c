// Abstraction
// this is the act of remove the unneccessary in order for the essesntial to be
// visible when Abstracting we remove that are not needed to be seen in the for
// a particular objective to be acheived eg printf() in C we Abstract in many

// In C we abstract in many ways
//  function
//  header files
//  sturcts with function pointers
//  Opaque Pointers
//  even modular programming too

// we will use fuctions as an example as it is the simplest form
 
//function to select largest of 3 numbers 

#include <stdio.h>
float large(float a, float b, float c)
{
    if (a >= b && a >= c ) return a;
    else if (b >= a && b >= c ) return b;
    else return c;
}

int main()
{
    float num1, num2, num3, largest;
    printf("Enter three numbers: ");
    scanf("%f %f %f, &num1, &num2, &num3");
    largest = large(num1, num2, num3);
    printf("largest number = %.2f", largest);
    return 0;
}



