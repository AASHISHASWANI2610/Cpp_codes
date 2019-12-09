#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x,c;
	clrscr();
	scanf("%d%d%d",&a,&b,&c);
	x = a>b? a>c ?a:c :b>c ?b:c; //x= a>b?a:b
	printf(" greator is=%d",x);
	getch();
}