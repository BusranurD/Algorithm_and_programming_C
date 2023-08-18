#include<stdio.h>

void faction(int n){
    int f=1;
    int i=1;
    while(i <= n){
        f *= i;
        i++;
    }
    printf("%d\n",f);
}
int main(){
    int num;
    printf("number?");
    scanf("%d",&num);

    int fact=1;
    for(int i=1; i <= num; i++){
        fact *= i;
    }
    printf("%d\n",fact);
    printf("---\n");
    faction(num);
    return 0;
}