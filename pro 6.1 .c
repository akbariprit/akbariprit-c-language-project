#include<stdio.h>
#include<string.h>

int main()
{
	 char arr[50];
	 char data1[50], data2[50];
	 
	 printf("Enter any string : ");
	 gets(arr);
	 
	 strcpy(data1 , (arr));
	 printf("string: %s\n" , data1);
	 
	 strcpy (data2 , strrev(arr));
	 printf("Reverse string: %s\n" , data2);
	 
	 if(!strcmp (data1 , data2 )){
	 	printf("palindrome");
	 }else {
	 	printf("not plindrome");
	 }
}