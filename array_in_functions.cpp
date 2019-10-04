#include<stdio.h>
float average(float marks[])
{
	int i;
	float avg=0;
	for(i=0;i<5;i++)
	{
		avg+=marks[i];
	}
	avg/=(i+1);
	return(avg);
}
int main()
{
	int i;
	float avg,marks[5];
	for(i=0;i<5;i++)
	{
		printf("enter the mark%d",i+1)
		;scanf("%f",&marks[i]);
	}
	avg=average(marks);
	printf("\nthe avg is:%f",avg);
}
