#include <stdio.h>
#include <stdlib.h>

int** input_elements(int, int);
void sum_elements(int **, int **, int, int);
void display_elements(int **, int, int);
void free_matrix(int **, int);

int main()
{
    int m, n, **arr1 = NULL, **arr2 = NULL;
    printf("Number of rows = ");
    scanf("%d", &m);
    printf("Number of columns = ");
    scanf("%d", &n);

    printf("Enter elements of the first matrix:\n");
    arr1 = input_elements(m, n);

    printf("Enter elements of the second matrix:\n");
    arr2 = input_elements(m, n);

    printf("The first matrix you entered:\n");
    display_elements(arr1, m, n);

    printf("The second matrix you entered:\n");
    display_elements(arr2, m, n);

    sum_elements(arr1, arr2, m, n);

    printf("The new matrix, after finding the sum of corresponding elements:\n");
    display_elements(arr1, m, n);

    free_matrix(arr1, m);
    free_matrix(arr2, m);

    return 0;
}

int ** input_elements(int rows, int cols)
{
    int i, j;
    int **parr = (int **) malloc(sizeof(int *) * rows);
    if(parr == NULL) {
        printf("Memory Allocation Failed!!");
        exit(0);
    }
    for(i = 0; i < rows; i++)
    {
        *(parr + i) = (int *) malloc(sizeof(int) * cols);
        if(*(parr + i) == NULL)
        {
            printf("Memory Allocation Failed!!");
            exit(0);
        }
        for(j = 0; j < cols; j++)
        {
            printf("index[%d][%d] = ", i, j);
            scanf("%d", (*(parr + i) + j));
        }
    }
    return parr;
}

void sum_elements(int **parr1, int **parr2, int rows, int cols) {
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            *(*(parr1 + i) + j) = *(*(parr1 + i) + j) + *(*(parr2 + i) + j);
        }
    }
}

void display_elements(int **parr, int rows, int cols) {
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

void free_matrix(int **parr, int rows)
{
    int i;
    if(parr == NULL) return;
    for(i = 0; i < rows; i++)
    {
        free(*(parr + i));
    }
    free(parr);
}
