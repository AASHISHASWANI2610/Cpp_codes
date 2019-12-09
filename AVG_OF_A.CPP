#include<stdio.h>
#include<conio.h>
 void main()
{
  clrscr();
  int arr[5],avg=0,sum=0,i;
  for(i=0;i<=4;i++)
  {
     printf("enter values for avg");
     scanf("%d",& arr[i]);
  }
  for(i=0;i<=4;i++)
  {
     sum=sum+arr[i];
  }
     avg=sum/5;
     printf("%d",avg);


     getch();
}


