//Write a program to check whether a given number is a Prime number or not

#include <stdio.h>
int main ()
{
int n,i,flag=0;

printf("Enter a number:-");
scanf("%d",&n);

for (i=2;i<n;i++)
{

if (n%i==0)
    flag=1;
}
if (flag==1)
printf("Given number is not a  prime number");

else
printf("Given number is a prime number");


return 0;
}
