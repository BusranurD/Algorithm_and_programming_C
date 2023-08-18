#include <stdio.h>

int main(){
    int arr[3][3],arr2[3][3];
    int i,j;
    printf("1. 3x3 matrix number?");
    for( i=0 ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("2. 3x3 matrix number?");
    for( i=0 ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int sum[3][3];
    printf("sum martrix\n");
    for( i=0; i<3 ; i++ ){
        for( j=0 ; j<3 ; j++){
            sum[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    for( i=0 ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
                printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}