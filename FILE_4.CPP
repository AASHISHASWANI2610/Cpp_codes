#include<stdio.h>
#include<conio.h>
 void main()
{
  clrscr();
  FILE *fp;
  char ch;
  int nol=0,not=0,nob=0,noc=0;
  fp=fopen("PRI2.txt","r");
  while (1)
  {
     ch=fgetc(fp);
     if(ch==EOF)
       break;
      noc++;
     if(ch==' ')
      nob++;
     if(ch=='\n')
      nol++;
     if(ch=='\t')
      not++;
  }
  fclose(fp);
  printf("number of characters=%d\n",noc);
  printf("number of blanks=%d\n",nob);
  printf("number of tabs=%d\n",not);
  printf("number of lines=%d\n",nol);
  getch();
}



