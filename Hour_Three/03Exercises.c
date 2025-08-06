/* 03Exercises: answers to the questions */

/*
int integer_add(int x, int y)
{
    x = 3;
    y = 5 + x;
}
*/

/* Write a C function that perform a multiplication of two integers and return the calculated result */
int integer_multiply(int x, int y)
{
    int result;
    result = x * y;
    return result;
}

/* Write a C program that calls the C function yoi just wrote in the last exercise to calculate the multiplication of 3 times 5 and then print the value */
#include <stdio.h>

int main(void)
{
    int product;
    product = integer_multiply(3, 5);
    printf("The multiplication of 3 times 5 is %d.\n", product);
    return 0;
}