#include<stdio.h>
void great(int *x,int *y)
{
	if(*x>*y)
		printf("the greatest no is:%d",*x);
	else
		printf("the greatest no is:%d",*y);
}
int main()
{
	int a,b,*p1=NULL,*p2=NULL;
	p1=&a;
	p2=&b;
	printf("enter the no:");
	scanf("%d",p1);
	printf("enter the second no:");
	scanf("%d",p2);
	great(p1,p2);
	
}
