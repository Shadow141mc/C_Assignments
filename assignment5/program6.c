/*
Print the following pattern
    1
   121
  12321
 1234321
123454321 
*/

#include <stdio.h>

int main()
{
    int i, j, s, k, m, ls;
    for(i = 1; i <= 9; i += 2)
    {
        ls = (9 - i) / 2;
        for(s = 1; s <= ls; s++)
        {
            printf(" ");
        }
        m = (i + 1) / 2;
        k = m - 1;
        for(j = 1; j <= i; j++)
        {
            if(j <= m)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d", k);
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}