#include<stdio.h>
int main()
{
	int i,j,array[10],n,temp,max,min;
	printf("enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the no:");
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if(array[i]<array[j])
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	min=array[0];
	max=array[n-1];
printf("the max is:%d \n the min is:%d",max,min);
/*	printf("the sorted array is:-\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
*/	
}
