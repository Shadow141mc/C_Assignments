/*
Print the following pattern
    1
   12
  123
 1234
12345 
*/

#include <stdio.h>

int main()
{
	int i, j, k;
	for(i = 5; i >= 1; i--)
	{
		k = 1;
		for(j = 1; j <= 5; j++)
		{
			if(j < i)
			{
				printf(" ");
			}
			else 
			{
				printf("%d",k);
				k++;
			}
		}
		printf("\n");
	}
	return 0;
}