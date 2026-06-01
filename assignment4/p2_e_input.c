/*
Write a program to read N positive integer numbers; if any input is zero, program should take the input again but if any input is negative loop body should be terminated.
*/

#include <stdio.h>

int main()
{
    int N, num, i;
    printf("How many positive integers do you want to enter?\n");
    scanf("%d", &N);
    printf("Enter %d positive numbers:\n", N);
    for(i = 1; i <= N; i++)
    {
        printf("Enter = ");
        scanf("%d", &num);
        if(num == 0)
        {
            printf("Wrong input, enter again!\n");
            i--;
        }
        else if(num < 0)
        {
            printf("Program terminated!!");
            break;
        }
    }
    return 0;
}