/*
Write a program to keep taking input and stop when sum exceed 100.
*/

#include <stdio.h>

int main()
{
    int num, sum = 0;
    while(sum <= 100)
    {
        printf("Enter a number = ");
        scanf("%d", &num);
        sum += num;
        printf("Current sum = %d\n", sum);
    }
    printf("%d exceeds 100, and program terminated!!", sum);
    return 0;
}