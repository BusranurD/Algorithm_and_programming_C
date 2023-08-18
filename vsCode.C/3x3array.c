#include <stdio.h>

int main(){
    int arr[3][3];
    int i=0,j;
    printf("3x3 matrix number?");
    for( ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0; i<3 ; i++ ){
        for( j=0 ; j<3 ; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}