#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
char fname1[100],fname2[100];
FILE*file1,file2;
clrscr();
printf("Enter the first file name:");
scanf("%s",&fname1);
printf("Enter the second file name:");
scanf("%s",&fname2);
file1=fopen(fname1,"r");
file2=fopen(fname2,"r");
if(file1==NULL||file2==NULL){
printf("ERROR:unable to open");
}
if(compareFile(file1,file2)){
printf("File are same.Deleting the seconf file.%s\n",fname2);
fclose(file2);
if(remove(fname)==0)
{
printf("File deleted successfully");
}
else
{
printf("ERROR:unable to delete the file \n");
}
}
fclose(file1);
fclose(file2);
getch();
retuen 0;
}
int compareFile(FILE*file1,FILE*file2)
{
char ch1,ch2;
do{
ch1=fgetc(file1);
ch2=fgetc(file2);
if(ch!=ch2){
return 0;
}
}
while(ch!=EOF&&ch2!=EOF);
return(ch1==EOF&&ch2==EOF);
}