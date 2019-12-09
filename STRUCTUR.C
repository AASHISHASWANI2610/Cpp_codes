#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student
{
	int rno;
	char name[50];
};
void main()
{
	student st;
	st.rno=7;
	strcpy(st.name,"hello");
	printf("Roll number is:%d",st.rno);
	printf("\nName is ")
	puts(st.name);
	getch();
}