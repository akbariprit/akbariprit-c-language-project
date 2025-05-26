#include<stdio.h>
int main()
{
    char grade;
    
    printf("enter your grade (A-f): ");
    scanf(" %c" , &grade);
    
    switch (grade)
    {
       
       case 'A':
             printf("Excellent work!\n");
             break;
       
       case 'B':
              printf("well done \n");
              break;
              
       case 'C':
              printf("Good job \n");
              break;
              
       case 'D':
              printf("You passed,but you could do better \n");
              break;
              
       case 'F':
              printf("Sorry, you faild \n");
              break;
              
              default:
              	printf("Invalid grade entered \n");
    }
}
