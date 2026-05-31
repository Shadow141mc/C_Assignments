/*
Write a program in C to find the digital root of a number.
*/

#include <stdio.h>

int main()
{
    int num, temp, droot;
    printf("Enter a number = ");
    scanf("%d", &num);
    droot = num;
    while(droot > 10)
    {
        temp = droot;
        droot = 0;
        while(temp > 0)
        {
            droot += temp % 10;
            temp /= 10;
        }
    }
    printf("The digital root of %d = %d", num, droot);
    return 0;
}