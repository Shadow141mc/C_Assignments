/*
Print the following pattern
55555
45555
34555
23455
12345
*/

#include<stdio.h>

int main()
{
	int i,j,k;
	for(i = 5; i >= 1; i--)
	{
		k = i;
		for(j = 1; j <= 5; j++)
		{
			if(k <= 5)
			{
			    printf("%d", k);
			    k++;
			}
			else
			    printf("5");
		}
		printf("\n");
	}
	return 0;
}