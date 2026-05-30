/*
Find the sum of the series:
1 + 1/2 + 1/3 + 1/4 + ... upto N terms
*/

#include <stdio.h>

int main()
{
    int N, i;
    float sum = 0;
    printf("How many terms do you want to find sum?\n");
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
      sum += 1.0/i;
    printf("Sum of the series = %f", sum);
    return 0;
}