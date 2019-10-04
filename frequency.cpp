#include<stdio.h>
void sort(int n,int array[]);
int main()
{
	int array[10],n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		printf("enter the no:");
		scanf("%d",&array[i]);
	}
	sort(n,array);
	return(0);
}
void sort(int n,int array[])
{
	int temp,freq[10],fre[10],q=0,flag=1,z=0,s=n;
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
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(array[i]==array[j] && i!=j)
			{
				q++;
				for(int a=j;a<n;a++)
				{
				 	array[a]=array[a+1];
				}
				j--;
				n--;
			}
			else
			{
				fre[z]=q;
				z++;
				q=0;
			}
		}
	}
	printf("the frequency table is:-");
	for (int i=0;i<z;i++)
	{
		printf("\n%d - %d",array[i],fre[i]);
	}
	
}
