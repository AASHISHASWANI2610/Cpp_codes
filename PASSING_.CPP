#include<stdio.h>
#include<conio.h>
 float largest(float[],int);
 void main()
{
  clrscr();
  float value[4]={2.5,2.8,4.75,3.67};
  printf("%f\n",largest(value,4));
  getch();
}
 float largest(float a[],int n)
{
 int i;
 float max;
 max = a[0];
 for(i=0;i<n;i++)
  if(max<a[i])
  max=a[i];
  return(max);
}
