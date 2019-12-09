#include<stdio.h>
#include<conio.h>
 void main()
{
  int matrix [3][3],i,j;
  printf("enter the elements of matrix:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
     scanf("%d",&matrix[i][j]);
   }
  }
  printf("lower diagonal of the matrix is:\n");
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
	 if(i>=j)
	 {
	   printf("%d\t",matrix[i][j]);
	 }
	 else
	 {
	  printf("\n");
	 }
       }
	printf("\n");
      }
      getch();
}






