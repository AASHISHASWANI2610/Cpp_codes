#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float area,r;
 const float pi=3.14;
 printf("enter any value for radius:");
 scanf("%f",&r);
 area=pi*r*r;
 printf("%f",area);
 getch();
}
