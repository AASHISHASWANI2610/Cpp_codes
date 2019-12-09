#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
{
  clrscr();
  char ch[]={"hello"},chh[]={"sir"};
  strcpy(ch,chh);
  printf("%s%s",ch,chh);
  getch();
}