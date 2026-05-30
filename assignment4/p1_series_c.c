/*
Find the sum of the series:
1*3 + 3*5 + 5*7 + ... upto N terms
*/

#include <stdio.h>

int main()
{
    int N, sum = 0, i, k;
    printf("How many terms do you want to find sum?\n");
    scanf("%d", &N);
    for(i = 1; i <= (N + N); i += 2)
    {
        k = i;
        sum += i * (i + 2);
    }
    printf("Sum of the series = %d", sum);
    return 0;
}