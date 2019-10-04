#include<stdio.h>
int main()
{
	int *ptr=NULL,*ptr1;
	ptr=new(int);
	ptr1=new(int);
	printf("hello");
	scanf("%d",ptr);
	printf("hello");
	scanf("%d",ptr1);
	printf("\n\t hello::  %x  ::hello",ptr);
	printf("\n\t hello::  %d  ::hello",*ptr);
	
	printf("\n\t hello::  %d  ::hello",*ptr1);
	printf("\n\t hello::  %x  ::hello",*ptr1);
	
	if(*ptr<*ptr1)
	{
		printf("\n ptr1 is big:%d",*ptr1);
	}
	else
	{
		printf("\n ptr is big %d",*ptr);
	}
	
	if(*ptr%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	delete(ptr);
}
