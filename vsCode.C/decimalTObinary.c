#include<stdio.h>

int main(){
    int num;
    printf("number?");
    scanf("%d",&num);
    int x[100];
    int i=0;
    while(num!=0){
        x[i]= num%2;
        num= num/2;
        i++;
    }
    int j=i-1;
    while(j>=0){
        printf("%d",x[j]);
        j--;
    }

    return 0;
}