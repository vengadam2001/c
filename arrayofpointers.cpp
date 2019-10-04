#include<stdio.h>

int main()
{
	int a[3],*x[3];

	for(int i=0;i<3;i++)
	{
		x[i]=a[i];		
	}
	for(int i=0;i<3;i++)
	{
		printf("enter the number");
		scanf("%d",x[i]);
	}
	for(int i=0;i<3;i++)
	{
		printf("\nthe numbers before swaping are:%d",*x[i]);
	}
}
	
