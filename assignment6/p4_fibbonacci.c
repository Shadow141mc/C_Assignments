/*
Print fibbonacci series using recursion.
*/

#include <stdio.h>

int fibo(int);

int main()
{
    int i, N;
    printf("How many terms do you want to print?\n");
    scanf("%d", &N);
    printf("Fibbonacci Series:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if(n == 0)
      return 0;
    else if(n == 1)
      return 1;
    else
      return fibo(n - 1) + fibo(n - 2);
}