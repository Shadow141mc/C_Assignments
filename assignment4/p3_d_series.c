/*
Print the sum of the series:
S = (1) + (1 + 2) + (1 + 2 + 3) + ... upto N terms
*/

#include <stdio.h>

int main()
{
    int i, j, N, sum = 0;
    printf("Upto how many terms do you want to find sum?\n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
    {
        for(j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    printf("The sum of the series = %d", sum);
    return 0;
}