#include <stdio.h>

int main(){
    int row;
    printf("row?");
    scanf("%d",&row);

    int i=0;
    int j,k;
    
    for( ; i<row ; i++){ 
        int num =0;
        for(k=0 ; k < row-1-i ; k++ )
            printf("  ");
        for(j=0 ; j<2*i+1 ; j++){
            if(j<=(2*i+1)/2)
                num++;
            else num--;
             printf("%d ",num);  
        }
        
        printf("\n");
        
    }
    

    return 0;
}