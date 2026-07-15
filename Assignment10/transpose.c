#include <stdio.h>
#include <stdlib.h>

void transpose(int **, int, int);
void display(int **, int, int);

int main()
{
    int **arr = NULL, rows, cols, i, j;
    printf("Number of rows = ");
    scanf("%d", &rows);
    printf("Number of columns = ");
    scanf("%d", &cols);
    arr = (int **) calloc(rows, sizeof(int *));
    if(arr == NULL) {
        printf("Memory allocation failed!!");
        exit(0);
    }
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        *(arr + i) = (int *) calloc(cols, sizeof(int));
        if(*(arr + i) == NULL)
        {
            printf("Memory allocation failed!");
            exit(0);
        }
        for(j = 0; j < cols; j++) {
            printf("index[%d][%d] = ", i, j);
            scanf("%d", (*(arr + i) + j));
        }
    }

    printf("The original matrix:\n");
    display(arr, rows, cols);

    transpose(arr, rows, cols);

    printf("The transposed matrix:\n");
    display(arr, rows, cols);

    if(arr == NULL) exit(1);
    for(i = 0; i < rows; i++)
    {
        free(*(arr + i));
    }
    free(arr);

    return 0;
}

void transpose(int **parr, int rows, int cols) {
    int i, j, temp;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
           if(i > j) {
               temp = *(*(parr + i) + j);
               *(*(parr + i) + j) = *(*(parr + j) + i);
               *(*(parr + j) + i) = temp;
           }
        }
    }
}

void display(int **parr, int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", *(*(parr + i) + j));
        }
        printf("\n");
    }
}
