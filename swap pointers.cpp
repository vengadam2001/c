#include<stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b,*x=NULL,*y=NULL;
	x=&a;
	y=&b;
	printf("enter the number");
	scanf("%d",x);
	printf("enter the number");
	scanf("%d",y);
	printf("\nthe numbers before swaping are:%d----%d",*x,*y);
	swap(x,y);
	printf("\nthe numbers before swaping are:%d----%d",*x,*y);
}			
