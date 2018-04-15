#include<stdio.h>
int main()
{
   int num,i,j,result=1;
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   {
     for(j=i;j<num;j++)
     {
       printf(" ");   //to print initial space 
     }
    for(j=1;j<=2*i-1;j++)
    {
       printf("%d ",result++);
    }

   printf("\n");  //to break line
  
  }
  return 0;
}
