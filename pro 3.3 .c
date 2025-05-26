#include<stdio.h>
int main()
{
    int n, first, last;
    printf("Enter any number: ");
    scanf("%d", &n);
    
    
    while (n >= 10) {
     
      n = n/10;
      
    }
    first = n;
    
    printf("The sum of first anb the last digit: %d\n" , first + last);
}
