#include<stdio.h>
#include<conio.h>
 void main()
{
   clrscr();
   char ch[5]="hello",chh[5]="HELLO";
   int  i,j,flag=0;
   for(i=0;ch[i]!='\0';i++)
   {
    for(j=0;ch[j]!='\0';j++)
    {
     if(ch[i]!=chh[j])
     {
       flag=0;
       break;
     }
    }
   }
   if(flag==1)
   {
   printf("equal");
   }
   else
   {
    printf("not equal");
   }
    getch();
}
