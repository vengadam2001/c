#include<stdio.h>
int main()//product of number with while loop
{
	int n=0,a=0,prod=1;
	printf("enter the no(integer):");
	scanf("%d",&n);
	printf("\n");
if(n!=0)
{
	while(n!=0)
	{
		a=n%10;
		prod*=a;
		n/=10;
		if(n!=0)
		{
			printf("%d*",a);
		}
		else
		{
			printf("%d=",a);
		}
	}
	printf("the product is:%d",prod);
}
else
{
	printf("the product is:%d",n);
}
}

