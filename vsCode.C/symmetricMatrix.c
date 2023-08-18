#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[3][3];
    int i,j;
    bool cont = true;
    printf("3x3 matrix number?");
    for( ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0 ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
                printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    for( i=0 ; i<3 ; i++ ){
        for( j=0; j<3 ; j++){
            if(arr[i][j] == arr[j][i])
                continue;
            else
                cont = false;
        }
    }
    if(cont  == true)
        printf("matrix is symmetric.");
    else
        printf("matrix is not symmetric.");
    
    return 0;
}