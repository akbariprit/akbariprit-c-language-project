#include<stdio.h>
int main()
{
	int n,m;
	printf("Size: ");
	
	scanf("%d" , &n);
	
	
	int a[n];
	
	printf("Elements: \n");
	
	
	for (m = 0; m <n; m++)
	{
		printf("a[%d] = ", m);
		scanf("%d" , &a[m]);
		
	}
	printf("Nagatives: ");
	
	for (m = 0; m < n; m++){
	
	
	if (a[m] < 0) {
		printf("%d" , a[m]);
	}
	
	}
}
