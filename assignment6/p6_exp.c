/*
Write a program to calculate exp(x,y) of a function using recursion
*/

#include <stdio.h>

int Exp(int, int);

int main()
{
    int b, p;
    printf("Base = ");
    scanf("%d", &b);
    printf("Power = ");
    scanf("%d", &p);
    printf("%d to the power %d = %d", b, p, Exp(b, p));
    return 0;
}

int Exp(int br, int pr)
{
    if(pr == 1)
    {
        return br;
    }
    return br * Exp(br, --pr);
}