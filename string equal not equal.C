#include<stdio.h>
#include<conio.h>
int main(){
char string1[50],string2[50],*ptr1,*ptr2;
printf("Enter the first string:");
scanf("%s\n",&string1);
printf("Enter the second string:\n");
scanf("%s\n",&string2);
ptr1=string1;
ptr2=string2;
while(*ptr1==*ptr2){
if(*ptr1=='\0'|| *ptr2=='\0')
break;
ptr1++;
ptr2++;
}
if(*ptr1=='\0' && *ptr2=='\0')
printf("both are equal");
else
printf("both are not equal\n");
getch();
return 0;
}
