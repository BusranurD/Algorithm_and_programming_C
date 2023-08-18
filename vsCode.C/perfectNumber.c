#include<stdio.h>

int main(){
    int num;
    printf("number?");
    scanf("%d",&num);
    
    int sum=0;
    int i=1;
    while(i < num){
        if(num%i == 0){
            sum += i;
        }
        i++;
    }
    if(sum == num)
        printf("number is perfect.");
    else
        printf("number is not perfect.");

    return 0;
}