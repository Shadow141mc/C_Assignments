/*
Find the sum of first N natural numbers using recusrion.
*/

#include <stdio.h>

int sum(int);

int main()
{
  int N;
  printf("Upto how many natural numbers do you want to find sum?\n");
  scanf("%d", &N);
  printf("Sum of %d natural numbers = %d", N, sum(N));
  return 0;
}

int sum(int n)
{
  if(n == 1)
    return 1;
  return n + sum(n - 1);
} 