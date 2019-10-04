#include<stdio.h>
int main()
{
	int a=0,n=0,num=0,n1=0;// palindrome with for loop
	printf("enter a number to check wether it's a palidrome or not:");
	scanf("%d",&num);
	n=num;
for(;n!=0;n/=10)
{
	a=n%10;
	n1=n1*10+a;
//	n/=10;
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
