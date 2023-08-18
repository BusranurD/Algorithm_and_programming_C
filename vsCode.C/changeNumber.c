#include<stdio.h>

int main(){
    int num, temp;
    printf("number?");
    scanf("%d",&num);
    int i=0;
        temp = num%10;
        num = num / 10;
    while(num!=0){
        temp*=10;
        temp += (num%10);
        num = num / 10;
        i++;
    }
        printf("%d",temp);

    return 0;
}