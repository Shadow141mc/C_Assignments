#include <stdio.h>
#include <stdlib.h>

void read(int *, int);
void display(int *, int);
void interchange(int *, int, int, int);
void smallest(int *, int);
void largest(int *, int);

int main() {
  int *arr = NULL, n, flag = 1, pos1, pos2;
  int choise;
  printf("Width of 1D array = ");
  scanf("%d", &n);
  arr = (int *)calloc(sizeof(int), n);

  if (arr == NULL) {
    puts("Memory allocation failed!");
    exit(0);
  }

  while (flag) {
    puts("What operation do you want to perform:");
    puts("[1] Read Array elements");
    puts("[2] Display Array elements");
    puts("[3] Interchange two elemets in array");
    puts("[4] Display smallest element in array");
    puts("[5] Display largest element in array");
    puts("[6] Terminate program\n");
    printf("Enter the corresponding number as choise = ");
    scanf("%d", &choise);
    printf("\n");

    enum Options {
      READ = 1,
      DISPLAY,
      INTERCHANGE,
      SMALLEST,
      LARGEST,
      TERMINATE
    };

    switch (choise) {
    case READ:
      read(arr, n);
      break;
    case DISPLAY:
      display(arr, n);
      break;
    case INTERCHANGE:
      pos1 = 0;
      pos2 = 0;
      printf("Enter positions to interchange, separated by comma (0 -> %d):\n",
             n);
      scanf("%d, %d", &pos1, &pos2);
      interchange(arr, n, pos1, pos2);
      break;
    case SMALLEST:
      smallest(arr, n);
      break;
    case LARGEST:
      largest(arr, n);
      break;
    case TERMINATE:
      flag = 0;
    default:
      puts("Wrong choise!");
    }
  }
  return 0;
}

void read(int *parr, int size) {
  int i;
  puts("Enter elements of the array:");
  for (i = 0; i < size; i++) {
    printf("arr[%d] = ", i);
    scanf("%d", parr + i);
  }
  printf("\n\n");
}

void display(int *parr, int size) {
  int i;
  puts("The array elements:");
  for (i = 0; i < size; i++) {
    printf("%d ", *(parr + i));
  }
  printf("\n\n");
}

void interchange(int *parr, int size, int pos1, int pos2) {
  int temp;
  char yn;
  if (pos1 < size && pos2 < size) {
    temp = *(parr + pos1);
    *(parr + pos1) = *(parr + pos2);
    *(parr + pos2) = temp;
    puts("Position interchanged!");
    puts("Do you want to display the elements (Y/N)?");
    scanf(" %c", &yn);
    if (yn == 'Y' || yn == 'y') {
      display(parr, size);
    }
  } else {
    printf("Position out of bounds for array!");
  }
  printf("\n\n");
}

void smallest(int *parr, int size) {
  int i, min = *parr;
  for (i = 1; i < size; i++) {
    if (min > *(parr + i)) {
      min = *(parr + i);
    }
  }
  printf("The smallest element is: %d", min);
  printf("\n\n");
}

void largest(int *parr, int size) {
  int i, max = 0;
  for (i = 0; i < size; i++) {
    if (max < *(parr + i)) {
      max = *(parr + i);
    }
  }
  printf("The largest element is: %d", max);
  printf("\n\n");
}
