#include<stdio.h>
struct book
{
	char name[100],catagory[10];
	int bid;
	float price;
};

int main()
{
struct book temp,s[10];
int i,j,n;
printf("enter the no of books:");
scanf("%d",&n);
for (i=0;i<n;i++)
{
	printf("\nenter the name:");
	scanf("%s",&s[i].name);
	printf("enter the catagory:");
	scanf("%s",&s[i].catagory);
	printf("enter the book id:");
	scanf("%d",&s[i].bid);
	printf("enter the price:");
	scanf("%f",&s[i].price);
}
temp=s[0];
	for(j=0;j<n;j++)
		if(temp.price<s[j].price)
		{
			temp=s[j];
		}
	printf("\ncostliest book is:-\nbook name:%s\nbook id:%d\ncatagory:%s\nprice:%f",temp.name,temp.bid,temp.catagory,temp.price);
}
