//Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>
int main ()
{
int n,i,sum=0;

printf("Enter number n:-");
scanf("%d",&n);

for(i=1;i<=2*n-1;i+=2)
{
sum=sum+i;
}

printf("sum of first %d odd natural number is %d",n,sum);

return 0;
}
