/*
Write a program in C to print perfect numbers in range 1 to N.
*/

#include <stdio.h>

int main()
{
    int N, i, j, dSum;
    printf("How to how much, do you want to find perfect number?\n");
    scanf("%d", &N);
    printf("Perfect numbers in range 1 to %d:\n", N);
    for(i = 1; i <= N; i++)
    {
        dSum = 0;
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                dSum += j;
            }
        }
        if(i == dSum)
            printf("%d ", i);
    }
    return 0;
}