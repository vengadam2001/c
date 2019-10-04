#include<stdio.h>
int main()
{	/*
	FILE *file;
	file=fopen("write.txt",'w');
	if(file==NULL)
	{
		printf("error in file correction");
		return 0;
	}
	fprintf(file,"enter the name");
	fclose(file);
	*/
	char c;
	FILE *file1;
	file=fopen("write.txt",'r');
	if(file==NULL)
	{
		printf("error in file correction");
		return 0;
	}
	char a[100];

	fclose(file1);
	FILE *file2;
	file=fopen("write.txt",'a');
	if(file==NULL)
	{
		printf("error in file correction");
		return 0;
	}
	

	fclose(file2);
}
