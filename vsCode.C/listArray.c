#include <stdio.h>

int main(){
    // Busranur Dag 23
    int arr[3][3];
    int i,j;
    for( i=0 ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
            if(j==0){
                printf("day?\n");
                scanf("%d",&arr[i][j]);
            }
            else if(j==1){
                printf("month?\n");
                scanf("%d",&arr[i][j]);
            }
            else if(j==2){
                printf("year?\n");
                scanf("%d",&arr[i][j]);
            }
        }
    }
    for( i=0 ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
                printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}