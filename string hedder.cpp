#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],name2[100];
	gets(name);
	strcpy(name2,name);
	strrev(name2);
	printf("\n%s------%s",name,name2);
	if(strcmpi(name,name2)==0)
	{
		printf("\n\n\tpalindrome");
	}
	else
	{
		printf("\n\n\tnot a palindrome");
	}
}
