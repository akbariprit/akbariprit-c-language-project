#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=5; i>=1; i-- )
	{
		for(j=i; j<5; j++)
		{
			printf(" ");
		}
		for(k=i; k>=1; k--)
		{
			if(k%2==1)
			{
				printf("1");
			} else
			{
				printf("0");
				
			}
		}
		printf("\n");
	}
}