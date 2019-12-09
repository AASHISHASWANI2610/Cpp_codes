#include<stdio.h>
#include<conio.h>
 void main()
{
   clrscr();
   int i,a,table;
   scanf("%d",&a);
   for(i=1;i<=10;i++)
   {
   table=i*a;
   printf("%d*%d=%d\n",a,i,table);
   }
   getch();
   }