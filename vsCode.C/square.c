#include<stdio.h>

int main(){
    int i,j;
    int row;
    printf("Enter an integer as row:");
    scanf("%d",&row);
    for(i=0 ; i<row ; i++){
        for(j=0 ; j<row ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}