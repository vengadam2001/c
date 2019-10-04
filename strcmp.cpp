#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],name2[100];
	printf("enter the name1:");
	gets(name);
	printf("enter the name2:");
	gets(name2);
	if(strcmpi(name,name2)==0)
	{
		printf("both name is same");
	}
	else
	{
		printf("different names");
	}
}
