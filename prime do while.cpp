#include<stdio.h>
int main()// prime no with do while loop
{
	int i=2,j=2,flag=0,n=0;
	printf("enter the number till which you want to print the prime no:");
	scanf("%d",&n);
	do
	{
		do
		{
			if(i%j==0)
			{
				flag =10;
				break;
			}
		j++;	
		}while(j<=(i/2));
		j=2;
		if(flag == 0)
		{
			printf("\nprime no is:%d",i);
		}
	flag=0;
	i++;
	}while(i<n);
}
