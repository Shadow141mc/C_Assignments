/*
Write a program in C to print multiplication table (1 - 10) using nested loop.
*/

#include <stdio.h>

int main()
{
    int i, j;
    printf("Multiplication Table from 1 to 10:\n");
    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            printf("\n%d x %d = %d", i, j, (i * j));
        }
        printf("\n");
    }
    return 0;
}