#include<stdio.h>
int main()
{
	int a,b,*p1=NULL,*p2=NULL;
	p1=&a;
	p2=&b;
	printf("enter the no:");
	scanf("%d",p1);
	printf("enter the second no:");
	scanf("%d",p2);
	printf("the sum of 2 nos is:%d",*p1+*p2);
	
}
