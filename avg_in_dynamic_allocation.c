#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*array,sum=0;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("\n\nthe n valuse is:%d\n\n",n);
	array=(int*)calloc(n,sizeof(int));
	if(array==NULL)
	{
		printf("error not allocated memory");
	}
	else
	{
	for(i=0;i<n;i++)
	{
		printf("\nenter the %d th no :",i+1);
		scanf("%d",(array+i));
	}

	printf("\nprinting the elements");
	
	for(i=0;i<n;i++)
	{
		sum+=*(array+i);
	}
printf("\nthe no is:%d",sum/n) ;
	free(array);
	}
}
