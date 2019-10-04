#include<stdio.h>
int main()
{
	int i=2,j=2,n=0,flag=0;
	printf("enter the no till which you want the prime no to be printed:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		for(j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
			  flag = 10;
			  break;
			}
		}
		if(flag==0)
		{
			printf("\nprime no %d",i);
		}
		flag=0;
	}
}
