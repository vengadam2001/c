#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0;
	char c;
FILE *fin;
fin=fopen("word.txt", "w"); 
fprintf(fin,"abdc");
fclose(fin);

FILE*fout;//for reading
fout=fopen("word.txt","r");
while(!feof(fout))
{
	++i;
	c=fgetc(fout);
	if(c==' ' || c=='NULL' ||c=='\n')
		i--;
}
printf("\n%d",i);
fclose(fout);
}
