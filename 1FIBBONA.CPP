#include<stdio.h>
#include<conio.h>
 void main()
{
  int firstdigit=0,seconddigit=1,i,n,nextdigit;
  clrscr();
  printf("enter value fot n:");
  scanf("%d",&n);
  printf("%d",firstdigit);
  printf("%d",seconddigit);
  for(i=0;i<=n;i++)
{
  nextdigit=firstdigit+seconddigit;
  printf("%d",nextdigit);
  firstdigit =seconddigit;
  seconddigit=nextdigit;
}
 getch();
}
