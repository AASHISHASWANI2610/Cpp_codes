#include<stdio.h>
#include<conio.h>
struct dinesh
{ int maths;
  int physics;
  int hindi ;
  int english;
  int science;
  float per;  };
void main()
{
   clrscr();
   int total
   marks;
   struct dinesh s1;
   printf("enter marks of all subjects");
   scanf("%d%d%d%d%d",&s1.maths,&s1.physics,&s1.hindi,&s1.english,&s1.science);
   printf("%d\n%d\n%d\n%d\n%d\n",s1.maths,s1.physics,s1.hindi,s1.english,s1.science);
   totalmarks=s1.maths+s1.physics+s1.hindi+s1.english+s1.science;
   printf("%d",totalmarks);
   s1.per=(float)totalmarks*100/500;
   printf("your percentage is:");
   printf("%f",s1.per);

   getch();
}