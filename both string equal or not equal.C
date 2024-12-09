#include<stdio.h>
#include<conio.h>
int main(){
char string1[50],string2[50],*ptr1,*ptr2;
clrscr();
printf("enter the first string:");
scanf("%s",&string1);
printf("enter the second string:");
scanf("%s",&string2);
ptr1=string1;
ptr2=string2;
while(*ptr1==*ptr2){
if(*ptr1=='\0'||*ptr2=='\0')
break;
ptr1++;
ptr2++;
}
if(*ptr1=='\0'&& *ptr2=='\0')
printf("Both are equal");
else
printf("Both are not equal");
getch();
return 0;
}