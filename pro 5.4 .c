#include<stdio.h>
int main()
{
   int a,b,c,d,rn,rs=0,cn,cs=0;
   
   printf("Enter row & column size :\n");
   scanf("%d%d" , &a, &b);
   int p[a][b];
   
   printf("Enter eiements:\n");
   for(c=0; c<a; c++)
   for(d=0; d<b; d++)
    scanf("%d" , &p[c][d]);
    
    printf("Enter row number: ");
    scanf("%d" , &rn);
    for(d=0; d<b; d++) rs += p[rn][d];
    
    printf("Row %d sum = %d\n" , rn , rs);
    
    printf("Enter column number: ");
    scanf("%d" , &cn);
    
    for(c=0; c<a; c++) cs += p[c][cn];
    
    printf("column %d sum = %d\n" , cn, cs);
   
}
