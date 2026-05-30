/*
Find the GCD (Greatest Common Divisor) using Recursion
*/

#include <stdio.h>

int gcd(int, int);

int main()
{
    int n1, n2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &n1, &n2);
    printf("GCD of %d and %d = %d", n1, n2, gcd(n1, n2));
    return 0;
}

int gcd(int a, int b)
{
    int ns;
    ns = (a < b) ? a : b;
    if(a % ns == 0 && b % ns == 0)
      return ns;
    else if(a % ns != 0 && b % ns == 0)
      return gcd(a % ns, b);
    else if(a % ns == 0 && b % ns != 0)
      return gcd(a, b % ns);
}