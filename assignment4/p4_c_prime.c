/*
Write a program in C to print prime numbers in range 1 to N.
*/

#include <stdio.h>

int main()
{
    int i, j, N, c;
    printf("Upto how much do you want to print Prime Numbers = ");
    scanf("%d", &N);
    for(i = 2; i <= N; i++)
    {
        c = 0;
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                c++;
        }
        if(!c)
            printf("%d ", i);
    }
    return 0;
}