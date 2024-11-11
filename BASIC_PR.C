#include<stdio.h>
#include<conio.h>
int main(){
int intValue;
char charValue;
float floatValue;
clrscr();
printf("Enter an integer:");
scanf("%d",intValue);
printf("You entered\n");
printf("Integer:%d\n",&intValue);
printf("character:%.c\n",&charValue);
printf("Float:%.2f\n",&floatValue);
getch();
return 0;
}