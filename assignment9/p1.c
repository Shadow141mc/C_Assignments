#include <stdio.h>
#include <stdlib.h>

int maxMarks(int **, int);

int main()
{
    int i, j, mp = 0, mc = 0, mm = 0, roll = 0, ROWS = 5, COLS = 4;
    int **arr = NULL;
    arr = (int **)malloc(ROWS * sizeof(int *));

    if(arr == NULL)
    {
        printf("Memory allocation failed!!");
        exit(0);
    }

    enum DATA {ROLL = 0, MP, MC, MM}; // MP = Marks in Physics, MC = Marks in Computer, MM = Marks in Mathematics
    puts("Enter the following data:\n");
    for(i = 0; i < ROWS; i++)
    {
        arr[i] = (int *)malloc(COLS * sizeof(int));
        printf("\nEnter the data of Student %d\n", i+1);
        for(j = 0; j < COLS; j++)
        {
            if(j == ROLL)
            {
                printf("Roll Number = ");
                scanf("%d", (*(arr + i) + j));
            }
            else if(j == MP)
            {
                printf("Marks in Physics = ");
                scanf("%d", (*(arr + i) + j));
            }
            else if(j == MC)
            {
                printf("Marks in Computer = ");
                scanf("%d", (*(arr + i) + j));
            }
            else 
            {
                printf("Marks in Mathematics = ");
                scanf("%d", (*(arr + i) + j));
            }
        }
    }
    printf("\n");

    for(i = 0; i < ROWS; i++)
    {
        printf("Roll Number = %d\nMaximum Marks = %d\n", arr[i][0], maxMarks(arr, i));
    }

    return 0;
}

int maxMarks(int **parr, int i)
{
    int sub1, sub2, sub3;
    sub1 = *(*(parr + i) + 1);
    sub2 = *(*(parr + i) + 2);
    sub3 = *(*(parr + i) + 3);

    return (sub1 > sub2) ? ((sub1 > sub3) ? sub1 : sub3) : ((sub2 > sub3) ? sub2 : sub3);
}
