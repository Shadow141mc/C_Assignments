/*
Write a program in C to find the product of digits of a number.
*/

#include <stdio.h>

int main()
{
    int num, temp, d, prod = 1;
    printf("Enter a number = ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0)
    {
        d = temp % 10;
        prod *= d;
        temp /= 10;
    }
    printf("The product of digits of %d = %d", num, prod);
    return 0;
}