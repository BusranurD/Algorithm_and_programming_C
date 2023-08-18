#include <stdio.h>

int main(){
    int base;
    printf("base?");
    scanf("%d",&base);

    int i=0;
    int j,k;
    char alph;
    alph = 65;
    for( ; i<base ; i++){
        for( k=0 ; k<i ; k++)
            printf(" ");
        for(j=base ; j>i ; j--)
            printf("%c ",alph);
        
        printf("\n");
        alph++;
    }
    
 
    return 0;
}