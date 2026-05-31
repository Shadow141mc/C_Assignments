/*
Write a C program to find LCM of two numbers.
*/

#include <stdio.h>

int main()
{
    int n1, n2, ns, nl, lcm, c = 2;
    printf("Enter first number = ");
    scanf("%d", &n1);
    printf("Enter second number = ");
    scanf("%d", &n2);
    ns = (n1 < n2) ? n1 : n2;
    nl = (n1 > n2) ? n1 : n2;
    lcm = nl;
    while(lcm % ns != 0)
    {
        lcm = nl * c;
        c++;
    }
    printf("LCM of %d and %d = %d", n1, n2, lcm);
    return 0;
}