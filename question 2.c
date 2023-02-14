//Write a program to calculate sum of first N even natural numbers

#include <stdio.h>
int main ()
{
int n,i,sum=0;

printf("Enter number n:-");
scanf("%d",&n);

for(i=2;i<=2*n;i+=2)
{
sum=sum+i;
}

printf("sum of first %d even natural number is %d",n,sum);

return 0;
}
