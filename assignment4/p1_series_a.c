/*
Find the sum of the series:
1 + 3 + 5 + 7 + ... upto N terms
*/

#include <stdio.h>

int main()
{
    int N, sum = 0, i;
    printf("How many terms do you want to find sum?\n");
    scanf("%d", &N);
    for(i = 1; i <= (N + N); i += 2)
    {
        sum += i;
    }
    printf("Sum of the series = %d", sum);
    return 0;
}