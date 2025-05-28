#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	scanf("%d%d" , &a, &b);
	
	int p[a][b];
	
	for (c = 0; c < a; c++)
    
    for (d = 0; d<b; d++){
    	printf("p[%d] [%d] = " , c ,d);
    	scanf("%d" , &p [c][d]);
	}
    
    max = p[0][0];
    
    for (c=0; c<a; c++)
    
    for (d=0; d<b; d++)
    
    if (p[c][d] > max )
    max = p[c][d];
    
    printf("max : %d\n " , max); 
}