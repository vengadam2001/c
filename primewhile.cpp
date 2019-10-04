#include<stdio.h>
int main()//prime no with while loop
{
	int i=2,j=2,flag=0,n=0;
	printf("enter the no till which you want to print teh prime no:");
	scanf("%d",&n);
	while(i<n)
	{
		while(j<=(i/2))
		{
			if(i%j==0)
			{
				flag=10;
			}
			j++;
		}
		j=2;
		if(flag == 0)
		{
			printf("\nprime no is:%d",i);
		}
		flag=0;
		i++;
	}
}
