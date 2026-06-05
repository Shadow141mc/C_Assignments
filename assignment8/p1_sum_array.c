/*
Write a program in C to find the summation of n elements in an array.
*/

#include <stdio.h>

int main()
{
    int arr[50], n, i, sum = 0;
    printf("How many elements do you want to enter?\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the elements in the array = %d", sum);
    return 0;
}