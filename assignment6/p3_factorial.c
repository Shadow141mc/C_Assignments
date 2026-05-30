/*
Find factorial of a number using recursion.
*/

#include <stdio.h>

int factorial(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial of %d = %d", num, factorial(num));
    return 0;
}

int factorial(int n)
{
    if(n == 1)
      return 1;
     return n * factorial(n - 1);
}