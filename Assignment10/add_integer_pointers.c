#include <stdio.h>

void sum(int *, int *, int *);

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers, separated by (,):\n");
    scanf("%d, %d, %d", &num1, &num2, &num3);
    sum(&num1, &num2, &num3);
    printf("The sum is: %d\n", num1);
    return 0;
}

void sum(int *pnum1, int *pnum2, int *pnum3)
{
    *pnum1 = (*pnum1) + (*pnum2) + (*pnum3);
}
