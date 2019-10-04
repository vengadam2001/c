#include<stdio.h>
union stud
{
	char name[20],gender[10];
	int uid;
	float marks;
};

int main()
{
union stud temp,s[10];
int i,j,n;
printf("enter the no of students:");
scanf("%d",&n);
for (i=0;i<n;i++)
{
	printf("enter the name:");
	scanf("%s",&s[i].name);
	printf("enter the gender:");
	scanf("%s",&s[i].gender);
	printf("enter the uid:");
	scanf("%d",&s[i].uid);
	printf("enter the marks:");
	scanf("%f",&s[i].marks);
}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if(s[i].marks>s[j].marks)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
	printf("\nfirst mark is:-\nname:%s\nunique id:%d\ngender:%s\nmarks:%f",s[0].name,s[0].uid,s[0].gender,s[0].marks);
}
