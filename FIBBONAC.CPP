#include<stdio.h>
#include<conio.h>
void main()
{
	int first=0,second=1,i,n,next;
	clrscr();
	printf("Enter number");
	scanf("%d",&n);
	printf("%d\t",first);
	printf("%d\t",second);

	for(i=2;i<=n;i++)
	{
		next=first+second;
		printf("%d\t",next);
		first=second;
		second=next;

	}

	getch();
}