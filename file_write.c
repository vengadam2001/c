#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{
char c; 
/*    FILE *fp = fopen("test.txt", "a"); 
    if (fp == NULL) 
    { 
        puts("Couldn't open file"); 
        exit(0); 
    } 
    else
    { 
       // fprintf(fp,"hello"); 
        while((c=getchar())!=EOF)
        {
        	putc(c,fp);
		}
		fclose(fp); 
    }*/
    FILE *fp = fopen("test.txt", "r"); 
    if (fp == NULL) 
    { 
        puts("Couldn't open file"); 
        exit(0); 
    } 
    else
    { 
       // fprintf(fp,"hello"); 
        while(feof(fp)==0)
        {
        	ch=fgetc(c,fp);
		}
		fclose(fp); 
    	 
    return 0; 
}
