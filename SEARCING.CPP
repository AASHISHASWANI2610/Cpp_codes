#include<stdio.h>
#include<conio.h>
 void main()
{
  clrscr();
  int array[]={2,4,6,8,10,12,14,16};
  int flag=0,a,i;
  printf("enter target  value");
  scanf("%d",&a);
  for(i=0;i<8;i++)
  {

    if(array[i]==a)
     {
       flag=1;
       break;
     }
  }
  if(flag==1)
  {
    printf("target found");
  }
  else
  {
    printf("target not found");
  }
  getch();
}
