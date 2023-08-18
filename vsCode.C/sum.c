#include<stdio.h>

int main(){
    int a,sum=0;
    char ch = 'y' ;
        printf("e is end\n");
    do{
        printf("num?");
        scanf("%d",&a);
        sum += a;
        printf("continue?");
        scanf("%s",&ch);
    }while(ch == 'y');
    printf("sum = %d",sum);
    return 0;
}