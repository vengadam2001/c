#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char ch;
   FILE *fp; 
   fp = fopen("test.txt", "r"); // read mode
 
   if (fp == NULL)
   {
      printf("Error while opening the file.\n");
      exit(-1);
   }
 
   printf("The contents of file are:\n");
 
   while(!feof(fp))
   {	
   		ch = fgetc(fp);
    	printf("%c", ch);
	}
   fclose(fp);
   return (0);
}
