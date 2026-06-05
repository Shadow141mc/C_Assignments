/*
Write a program in C to find maximum and minimum from n elements in an array.
*/

#include <stdio.h>

int main()
{
    int arr[50], n, i, max, min;
    printf("How many elements do you want to enter?\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    min = arr[i];
    max = 0;
    for(i = 0; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Max element in the array = %d", max);
    printf("\nMin element in the array = %d", min);
    return 0;
}