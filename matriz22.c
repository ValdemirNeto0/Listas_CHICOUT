#include <stdio.h>

#include <stdlib.h>

int main(){
    int A[3][3],B[3][3],C[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
    scanf("%d", &A[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
    scanf("%d", &B[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
    C[i][j]=A[i][j]*B[j][i];
    }
    printf("\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d ", A[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d ",B[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d ",C[i][j]);
    }
    printf("\n");
    }
}