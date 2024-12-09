#include<stdio.h>
#define ROWS
#define COLS
void addmatrices(int*mat1,int*mat2,int*result,int rows,int cols){
for(int i=0;i<rows*cols;i++){
*(result+i)=*(mat1+i)+*(mat2+i);
}
}
int main(){
int mat1[ROWS][COLS],mat2[ROWS][COLS],result[ROWS][COLS];
printf("Enter element of the first matrix (%dx%d):\n" ROWS,COLS);
for(int i=0;i<ROWS;i++){
for(int j=0;j<COLS;j++){
scanf("%d",&mat[i][j]);
}
}
printf("Enter element if the second matrix (%dx%d):\n",ROWS,COLS);
for(int i=0;i<ROWS;i++){
for(int j=0;j<COLS;j++){
scanf("%d",&mat2[i][j]);
}
}
addmatrices(int*)mat1,(int*)mat2,(int*)result,ROWS,COLS);
printf("\n Resultant Matrix after Addition:\n");
for(int i=0;i<ROWS;i++){
for(int j=0;j<COLS:j++){
printf("%d",result[i][j]);
}
}
printf("\n");
}
getch();
return 0;
}