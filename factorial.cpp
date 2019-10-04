#include<stdio.h>
int main()
{
	int num=0,fact=1;
	printf("enter the no to find its factorial:");
	scanf("%d",&num);
	printf("%d!=",num);
	while(num!=0)
	{
		printf("%d*",num);
		fact*=num;
		num--;
	}
	printf("=%d",fact);
	
}
