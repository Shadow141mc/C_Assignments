/*
Write a program to read N positive integer numbers; if any input is zero, program should take the input again but if any input is negative loop body should be terminated.
*/

#include <stdio.h>

int main()
{
    int num, flag = 1;
    while(flag)
    {
        printf("Enter a number = ");
        scanf("%d", &num);
        if(num == 0)
            printf("Enter again!!\n");
        if(num < 0)
        {
            flag = 0;
            printf("Program Terminated!");
        }
    }
    return 0;
}