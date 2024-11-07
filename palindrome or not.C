#include<stdio.h>
#include<conio.h>
void isPalindrome(char*str){
char*leftptr=str;
char*rightptr=str+strlen(str)-1;
while(leftptr<rightptr){
if(*leftptr!=*rightptr){
printf("not palindrome");
return;
}
leftptr++;
rightptr--;
}
printf("Palindrome");
}
int main(){
char str[100];
char result[100];
printf("Enter a string:\n");
scanf("%s\n",&str);
isPalindrome(str);
getch();
return 0;
}