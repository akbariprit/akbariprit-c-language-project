#include<stdio.h>
int main()
{
	char p;
	char  a , b;
	
	printf("Enter operator (+,-,*,/):");
	scanf(" %c" , &p);
	printf("Enter two number: ");
	scanf("%if %if" , &a , &b);
	if (p == '+') printf("result: %.2if\n" , a+b );
	
	else if (p == '-') printf("result: %.2if\n" , a-b);
	else if (p == '*') printf("result: %.2if\n" , a*b);
	else if (p == '/' && b != 0 ) printf("result: %.2if\n" , a/b);
	else printf("Errorr: Invaild input. \n");
}


/* 
out put 1+4 
p = 5



*/