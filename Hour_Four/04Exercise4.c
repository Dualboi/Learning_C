/* 04 Exercises */
#include <stdio.h>
#include <string.h>

/* Exercise 4: Given the declaration double dbl_num = 123.456;, write a program
that prints out the value of dbl-num in both floating point and scientific notation. */
int main(void)
{
    double dbl_num = 123.456;
    printf("%f, %e", dbl_num, dbl_num);
    return 0;
}