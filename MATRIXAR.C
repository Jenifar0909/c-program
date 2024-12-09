#include<stdio.h>
#include<conio.h>
void getmatrix(int[][2]);
void addtion(int[][2],int[][2],int[][2]);
void subtraction(int[][2],int[][2],int[][2]);
void multiplication(int[][2],int[][2],int[][2]);
void display(int[][2]);
int x[2][2]={0},y[2][2]={0},z[2][2]={0};
int i,j,k;
void main()
{
int ch;
clrscr();
printf("\n Matrix operation");
printf("\n-------------------------");
printf("\n Matrix addition      :1");
printf("\n Matrix subtraction   :2");
printf("\n Matrix multiplication:3");
printf("\n Enter your choice    :");
scanf("%d",&ch);
printf("Enter the matrix 1-2*2 matrix\n");
getmatrix(x);
printf("Enter the matrix 2-2*2 matrix\n");
getmatrix(y);
switch(ch)
{
case 1:
addition(x,y,z);
printf("\n :- Matrix Addition Result :-\n");
break;
case 2:
subtraction(x,y,z);
printf("\n :- Matrix Subtraction Result :-\n");
break;
case 3:
multiplication(x,y,z);
printf("\n :- Matrix Multiplication Result :-\n");
break;
deault:
printf("\n Invalid Choice \n");
}
display(z);
getch();
}
void getmatrix(int t[][2])
{
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&t[i][j]);
}
void addition(int a[][2],int b[][2],int c[][2])
{
for(i=0;i<2;i++)
for(j=0;j<2;j++)
c[i][j]=a[i][j]+b[i][j];
}
void subtraction(int a[][2],int b[][2],int c[][2])
{
for(i=0;i<2;i++)
for(j=0;j<2;j++)
c[i][j]=a[i][j]-b[i][j];
}
void multiplication(int a[][2],int b[][2],int c[][2])
{
for(i=0;i<2;i++)
for(j=0;j<2;j++)
c[i][j]=c[i][j]+a[i][j]*b[i][j];
}
void display(int m[][2])
{
int i,j;
printf("\n\n")
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%d",m[i][j]);
printf("\n");
}
}