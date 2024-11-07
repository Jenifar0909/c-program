#include<stdio.h>
#include<conio.h>
int main(){
int num;
clrscr();
printf("Enter an integer:");
scanf("%d",&num);
if(num%2==0){
printf("%d is even.\n",num);
}
else{
printf("%d is odd.\n",num);
}
getch();
return 0;
}