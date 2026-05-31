/*
Write a program in C to print Krishnamurthy/Strong number in range 1 and N
*/

#include <stdio.h>

int main()
{
    int N, i, j, fact, d, temp, sum;
    printf("Upto how much do you want to print Krishnamurthy number?\n");
    scanf("%d", &N);
    printf("The Krishnamurthy numbers in range 1 and %d are:\n", N);
    for(i = 1; i <= N; i++)
    {
        temp = i;
        sum = 0;
        while(temp > 0)
        {
            d = temp % 10;
            fact = 1;
            for(j = 2; j <= d; j++)
            {
               fact *= j;
            }
            sum += fact;
            temp /= 10;
        }
        if(sum == i)
            printf("%d ", i);
    }
    return 0;
}