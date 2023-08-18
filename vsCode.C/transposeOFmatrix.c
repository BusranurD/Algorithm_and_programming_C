#include <stdio.h>

int main(){
    int arr[4][4];
    int i=0,j;
    printf("4x4 matrix number?");
    for( ; i<4 ; i++ ){
        for( j=0; j<4 ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0; i<4 ; i++ ){
        for( j=0 ; j<4 ; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    int trans[4][4];
    for( i=0 ; i<4 ; i++ ){
        for( j=0; j<4 ; j++){
            trans[i][j] = arr[j][i];
        }
    }
    for( i=0; i<4 ; i++ ){
        for( j=0 ; j<4 ; j++){
            printf("%d  ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}