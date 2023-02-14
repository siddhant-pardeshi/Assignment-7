//Write a program to calculate sum of first N natural numbers

#include <stdio.h>

int main()
{
int i,n,sum=0;

printf("Enter number to calculate sum");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum of %d natural number is %d",n,sum);

return 0;
}
