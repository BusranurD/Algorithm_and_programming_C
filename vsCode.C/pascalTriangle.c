#include <stdio.h>

int main(){
    int row;
    printf("row?");
    scanf("%d",&row);

    int i=1;
    int j,k;
    
    for( ; i<row ; i++){ 
        int num =1;
        for(k=0 ; k < row-i ; k++ )
            printf(" ");
        for(j=0 ; j<i ; j++){
            
            if(j==i/2){
                continue;}
            else{
            printf("%d ",num);      
            if(j<=(i-2)/2)
                num=num+i-1;
            else num=num-i+1;
            }
        }
        
        printf("\n");
        
    }
    

    return 0;
}