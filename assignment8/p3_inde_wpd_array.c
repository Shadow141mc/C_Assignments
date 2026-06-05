/*
Write a program in C to insert and delete an element at specific position in an array randomly.
*/

#include <stdio.h>

int main()
{
    int arr[50], n, i, index, num;
    char ch;
    printf("How many elements do you want to enter?\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter choise:\n'i' for insertion\n'd' for deletion\n");
    scanf(" %c", &ch);
    if(ch == 'i')
    {
        printf("Enter the index of array at which element will be inserted = ");
        scanf("%d", &index);
        printf("Enter the element to be inserted = ");
        scanf("%d", &num);
        arr[index] = num;
        printf("Array after insertion:\n");
        for(i = 0; i < n; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
    else if(ch == 'd')
    {
        printf("Enter the index of array at which element will be deleted = ");
        scanf("%d", &index);
        arr[index] = -999;
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
    else
    {
        printf("Wrong choise!!\n");
    }
    return 0;
}