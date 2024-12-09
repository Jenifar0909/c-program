#include<stdio.h>
#include<conio.h>
int main(){
int intValue;
float floatValue;
char charValue;
clrscr();
printf("enter an integer:");
scanf("%d",&intValue);
printf("enter a float:");
scanf("%f",&floatValue);
printf("enter a character:");
scanf("%c",&charValue);
printf("\n you entered:\n");
printf("Integer:%d\n",intValue);
printf("Float:%.2f\n",floatValue);FF
printf("Character:%c\n",charValue);
getch();
return 0;
}