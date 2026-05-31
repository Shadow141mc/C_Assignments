/*
Find the sum of the series:
S = 1! + 2! + 3! + 4! + ... upto N terms.
*/

#include <stdio.h>

int main()
{
    int N, i, j, sum = 0, fact;
    printf("How many terms do you want to find sum?\n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
    {
        fact = 1;
        for(j = 2; j <= i; j++)
        {
            fact *= j;
        }
        sum += fact;
    }
    printf("The sum of the series = %d", sum);
    return 0;
}