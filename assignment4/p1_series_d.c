/*
Find the sum of the series:
1 + 1/(2^2) + 1/(3^3) + ... upto N terms
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, N;
    float sum = 0;
    printf("How many terms do you want to find sum?\n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
    {
        sum += 1/pow(i, i);
    }
    printf("The sum of the series is %f", sum);
    return 0;
}