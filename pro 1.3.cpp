#include<stdio.h>
int main()
{
	float a , b;
	printf("Enter two angles : ");
	scanf ("%f%f" , &a , &b);
	 
	 if (a ==60 ||  b == 60)
	  printf("Third angle : %.2f\n" , 180 - (a + b));
	  
	  else
	      printf("Not a right triangle\n"); 
}
