/*
Find sum of digits of a number using recursion.
*/

#include <stdio.h>

int sum_of_digits(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d = %d", num, sum_of_digits(num));
    return 0;
}

int sum_of_digits(int n)
{
    if(n == 0)
        return 0;
    return (n % 10) + sum_of_digits(n / 10);
}