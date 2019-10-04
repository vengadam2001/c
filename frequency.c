#include<stdio.h>
void sort(int n,int array[]);
int main()
{
	int array[100],i,n;
	printf("enter the size of the size of array");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter the no:");
		scanf("%d",&array[i]);
	}
	sort(n,array);
	return(0);
}
void sort(int n,int array[])
{
	int i,j,a,temp,freq[100],q=0,z=0,s=n;
	
	for(i=0;i<n;i++)						//arranging in assending order
	{
		for(j=0;j<n;j++)
		{
			
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}										// arranging in assending order ends
	n++;
	for(i=0;i<n;i++)
	{
		q=0;
		for(j=i;j<n;j++)
		{
			if(array[i]==array[j])
			{
				++q;
			}
			else
			{
				freq[z]=q;
				z++;
				i+=q;
				i--;
				break;
			}
		}
	}
	for(i=0;i<n;i++)//deleating the repeating variables...
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]==array[j] && i!=j) 
				{	
					for(a=j;a<n;a++)// for deleating the repeating variables
						{
				 		array[a]=array[a+1];
						}
					n--;
					j--;
				}
		}
	}
	
	printf("the frequency table is:-");
	for (i=0;i<z;i++)
	{
		printf("\n%d - %d",array[i],freq[i]);
	}
	
}
