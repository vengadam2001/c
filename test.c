#include<stdio.h>
int main()
{
	int i,array[10],a,j,n;
	printf("enter teh siz eof teh array");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("etenter teh no :");
		scanf("%d",&array[i]);
	}


	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]==array[j])
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
		for (i=0;i<n;i++)
	{
		printf("\n no :%d",array[i]);
	}
}
