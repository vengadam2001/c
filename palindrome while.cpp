#include<stdio.h>
int main()
{
	int n=0,n1=0,a=0,num;//palindrome with while loop
	printf("enter a number to check wether it's a palidrome or not:");
	scanf("%d",&num);
	n=num;
while(n!=0)
{
	a=n%10;
	n1=n1*10+a;
	n/=10;
}
printf("\n %d==%d\n",num,n1);
if (num==n1)
{
	printf("is a palindrome");
}
else
{
	printf("it's not a palindrome");
}
}
