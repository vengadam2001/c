#include<stdio.h>//4710hq
//int maxi(int array[],int s);
//int mini(int array[],int s);

int maxi(int array[],int s)
{
	int i,j,temp;
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[i]= temp;
			}
		}
	}
	return(array[0]);
}
int mini(int array[],int s)
{
	int i,j,temp;
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[i]= temp;
			}
		}
	}
	return(array[0]);
}

int main()
{
	int s,max,min,array[25],i;
	printf("enter teh size of teh array:");
	scanf("%d",&s);
	for (i=0;i<s;i++)
	{
		printf("enter teh no:");
		scanf("%d",&array);
	}
	min=mini(array,s);
	max=maxi(array,s);
	printf("\nminimum is%d:\n the maximum is:%d",min,max);
	return(0);
}
