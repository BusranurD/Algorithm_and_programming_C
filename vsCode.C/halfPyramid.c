#include <stdio.h>

int main(){
    int base;
    printf("base?");
    scanf("%d",&base);

    int i=0;
    int j;
    for( ; i<base ; i++){
        for(j=0 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}