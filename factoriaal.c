#include<stdio.h>
#include<conio.h>
int main()
{
int n,fact=1,i;
printf("Enter any integer");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("Factorial of given no is%d",fact);
return 0;
}
