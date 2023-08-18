#include <stdio.h>

int main(){
    int base;
    printf("base?");
    scanf("%d",&base);

    int i=0;
    int j;
    int num=1;
    for( ; i<base ; i++){
        for(j=0 ; j<=i ; j++){
            printf("%d ",num);
        }
        printf("\n");
        num++;
    }
    printf("\n");

    int w=0;
    int x;
    for( ; w<base ; w++){
        for(x=0 ; x<=w ; x++){
            printf("%d ",x+1);
        }
        printf("\n");
    }

    return 0;
}