#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b)//call by address or call by reference
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void swaps(int a, int b) //call by value
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void main()
{
	int x,y;
	clrscr();
	printf("Enter two numbers for swapping");
	scanf("%d%d",&x,&y);
	printf("values before swapping\n");
	printf("%d%d",x,y);
	printf("values after swapping\n");
	swap(&x,&y);
	printf("%d%d",x,y);
	getch();
}