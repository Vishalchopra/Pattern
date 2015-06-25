#include<stdio.h>

int main()
{
	int i, j, k, f, a, n;
	printf("Enter the value of n it should be even\n");
	scanf("%d", &n);
	k = a = f = 0;
	//for(i = 0; i < 8; i++)
	for(i = 0; i < n; i++)
	{
		//for(j = 0; j < 4; j++)
		for(j = 0; j < n/2; j++)
		{
			//if(i <  5)
			if(i <  n/2 + 1)
			{
				//if(j < 4 - a)
				if(j < n/2 - a)
					printf(" ");
				else
					printf("* ");
			}
			else
				if(j > k)
				{
					printf("* ");
				}
				else 
				{
					printf(" ");
				}
		}
		//if(i > 4)
		if(i > n/2)
			k++;
		a++;
		printf("\n");
	}

	return 0;
}
