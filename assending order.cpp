#include<stdio.h>
int main()
{
	int array[100],n,temp;
	printf("enter the size of the array");
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		printf("\nenter the no:");
		scanf("%d",&array[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		if(array[i]<array[j])
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	printf("the sorted array is:-\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
	
}
