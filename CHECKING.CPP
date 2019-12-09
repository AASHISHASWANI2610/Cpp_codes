#include<stdio.h>
#include<conio.h>

   void main()
   {
       char a;
       printf("enter any character for a");
       scanf("%c",&a);

       if(a>='1'&&a<='9')
       {
	 printf("this value is numeric value");
       }
       else if(a>='a'&&a<='z')
       {
	printf("this is an alphabet value");
       }
       else if (a>='A'&&a<='Z')
       {
	printf("also alphabet");
       }
       else{
		printf("you got that, It's a special character");
       }
       getch();
       }