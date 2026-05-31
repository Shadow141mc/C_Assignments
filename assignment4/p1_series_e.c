/*
Find the sum of the series:
1 + (3^2)/3! + (5^2)/5! + ... upto N terms
*/

#include <stdio.h>

int main()
{
    int i, j, N, fact;
    float sum = 0;
    printf("How many terms do you want to find sum?\n");
    scanf("%d", &N);
    for(i = 1; i <= (N + N); i += 2)
    {
        fact = 1;
        for(j = 2; j <= i; j++)
        {
            fact *= j;
        }
        sum += (i*i)/(float)fact;
    }
    printf("The sum of the series is %f", sum);
    return 0;
}