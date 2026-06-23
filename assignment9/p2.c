#include <stdio.h>
#include <stdlib.h>

void total(int **, int);
void avg(int **, int);
int cavg(int **, int);

int main()
{
    int i, j, ROWS = 10, COLS = 5, SUB = 3;
    int **arr = NULL;
    arr = (int **)malloc(ROWS * sizeof(int *));

    if(arr == NULL)
    {
        printf("Memory allocation failed!!");
        exit(0);
    }

    enum DETAILS {SUB1 = 0, SUB2, SUB3};
    printf("Enter the data:\n");
    for(i = 0; i < ROWS; i++)
    {
        printf("\n\nEnter the data for Student %d\n", i+1);
        arr[i] = (int *)malloc(COLS * sizeof(int));
        for(j = 0; j < SUB; j++)
        {
            if(j == SUB1)
            {
                printf("Marks in Maths = ");
                scanf("%d", (*(arr + i) + j));
            }
            else if(j == SUB2)
            {
                printf("Marks in Physics = ");
                scanf("%d", (*(arr + i) + j));
            }
            else if(j == SUB3)
            {
                printf("Marks in Computer = ");
                scanf("%d", (*(arr + i) + j));
            }
        }
    }

    for(i = 0; i < ROWS; i++)
    {
        total(arr, i);
        avg(arr, i);
    }

    printf("\nTest Details\n");
    i = 0;
    while(i < ROWS)
    {
        printf("\nStudent %d\n", i+1);
        printf("Total marks = %d\n", arr[i][3]);
        printf("Average marks = %d\n", arr[i][4]);
        i++;
    }

    printf("\nClass average = %d\n", cavg(arr, ROWS));

    for(i = 0; i < ROWS; i++)
    {
        free(arr[i]); // Free each row
    }
    free(arr);

    return 0;
}

void total(int **parr, int i)
{
    *(*(parr + i) + 3) = parr[i][0] + parr[i][1] + parr[i][2];
}

void avg(int **parr, int i)
{
    *(*(parr + i) + 4) = parr[i][3] / 3;
}

int cavg(int **parr, int rows)
{
    int i = 0, classavgtotal = 0;
    while(i < rows)
    {
        classavgtotal += parr[i][4];
        i++;
    }
    return (int)(classavgtotal/rows);
}
