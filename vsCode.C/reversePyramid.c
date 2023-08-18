#include <stdio.h>

int main(){
    int row;
    printf("row?");
    scanf("%d",&row);

    int i=row;
    int j,k;
    for( ; i>0 ; i--){ 
        for(k=0 ; k < row-i ; k++ )
            printf("  ");
        for(j=0 ; j<2*i-1 ; j++)
            printf("* ");
        
        printf("\n");
    }
    

    return 0;
}