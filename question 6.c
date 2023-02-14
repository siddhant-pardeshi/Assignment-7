//Write a program to calculate factorial of a number

#include <stdio.h>

int main()
{
int i,n,fact=1;

printf("Enter number to calculate factorial:-");
scanf("%d",&n);

for(i=n;i>=1;i--)
{
fact=fact*i;
}
printf("Factorial of %d natural number is %d",n,fact);

return 0;
}
