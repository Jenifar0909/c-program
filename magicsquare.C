#include<stdio.h>
#include<conio.h>
void generateMagicSquare(int n){
int i,j,newi,newj,num,MagicSquare[5][5];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
MagicSquare[i][j]=0;
i=0;
j=n/2;
for(num=1;num<=n*n;num){
MagicSquare[i][j]=num;
newi=(i-1+n)%n;
newj=(j+1)%n;
if(MagicSquare[newi][newj])!=0{
i=(i+1)%n;
}
else
{
i=newi;
j=newj;
}
}
printf("The MagicSquare for n=%d:\n",n);
for(i=0;i<n;i++){
for(j=0;j<n;j++)
printf("%3d",MagicSquare[i][j]);
printf("\n");
}
}
main(){
int n;
printf("Enter the size of the Magic Square(odd number):");
scanf("%d",&n);
if(n%2==0){
printf("MagicSquare is not possible for even numbers\n");
}
else
generate MagicSquare(n);
}
getch();
return 0;
}