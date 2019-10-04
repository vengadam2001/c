#include<stdio.h>
int main()//product of no with do while loop
{
	int n=0,prod=1,a=0;
	printf("enter a no(integer):");
	scanf("%d",&n);
 do
 {
	a=n%10;
	prod*=a;
	n/=10;
	if(n!=0)
		printf("%d*",a);
	else
		printf("%d=",a);
 }while(n!=0);
 printf("%d",prod);
 return(0);
}
