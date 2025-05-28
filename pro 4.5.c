#include<stdio.h>
int main()
{
	int i,j,k=5,l;
	
	for(i=k; i>=1; i--)
	{
		for(l=i-1; l>=1; l--)
		{
			printf(" ");
			
		}
		for(j=i; j<=5; j++)
		{
			printf("%d" , j);
			
		}
		for(j=k-1; j>=i; j--)
		{
			printf("%d" , j);
		}
		printf("\n");
		
	} 
}