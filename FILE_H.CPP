#include<stdio.h>
#include<conio.h>
 void main()
{
 FILE * f1;
 char c;
 printf("Data input  \n");
 f1=fopen("input.txt","w");
 while ((c=getchar())!= EOF)
 {
 fputc(c,f1);
 }
 fclose(f1);
 printf("\n Data output\n\n");
 f1=fopen("input.txt","r");
 while  ((c=fgetc(f1))!=EOF)
 {
 printf("%c",c);
 }
 fclose (f1);
 getch();

}