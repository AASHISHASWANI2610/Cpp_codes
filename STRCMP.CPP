#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
{
  clrscr();
  char ch[]={"HELLO"},chh[]={"hello"};
  if (strcmp(ch,chh)==0)
  {
  printf("both are equal");
  }
  else
  {
  printf("not equal");
  }
  getch();
}