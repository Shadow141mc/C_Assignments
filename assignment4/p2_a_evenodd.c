/*
Write a C program to print all even and odd numbers between 1 and N.
*/

#include <stdio.h>

int main()
{
    int i, N;
    printf("Enter upto how much numbers will be displayed = ");
    scanf("%d", &N);
    printf("Even numbers between 1 and %d:\n", N);
    for(i = 1; i < N; i++)
    {
        if(i % 2 == 0)
          printf("%d ", i);
    }
    printf("\nOdd numbers between 1 and %d:\n", N);
    for(i = 2; i < N; i++)
    {
        if(i % 2 != 0)
          printf("%d ", i);
    }
    return 0;
}