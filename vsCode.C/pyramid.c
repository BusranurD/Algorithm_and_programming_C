#include <stdio.h>

int main(){
    int row;
    printf("row?");
    scanf("%d",&row);

    int i=0;
    int j,k;
    for( ; i<row ; i++){ 
        for(k=0 ; k < row-1-i ; k++ )
            printf("  ");
        for(j=0 ; j<2*i+1 ; j++)
            printf("* ");
        
        printf("\n");
    }
    

    return 0;
}