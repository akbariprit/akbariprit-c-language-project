#include<stdio.h>
int main()
{
	float  base, hra, da, ta;
	
	 float gross;
	    printf("base salary : ");
	    scanf("%f" , &base);
	    
	    printf("hra : ");
	    scanf("%f" , &hra);
	     
	    printf("da : ");
		scanf("%f" , &da);
		
		printf("ta : ");
		scanf("%f" ,&ta);
		
		gross = base + (hra + da + ta) * base / 100;
		
		printf("gross salary = %.2f\n" , gross);
}
    
