/*
Print the following pattern
A
BB
CCC
DDDD
EEEEE
*/

#include <stdio.h>

int main()
{
    int i, j;
    char c = 'A';
    for(i = 1; i <=5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", c);
        }
        c++;
        printf("\n");
    }
    return 0;
}