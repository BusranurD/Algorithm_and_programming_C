#include<stdio.h>

int main(){
    int num,sum=0;
    printf("number?");
    scanf("%d",&num);
    int i=1;
    for(; i<num ; i++){
        if(num%i == 0)
            sum += i;
    }
    int j=1,sum2=0;
    for( ; j<sum ; j++){
        if(sum%j == 0)
            sum2+=j;
    }
    if(sum2==num)
        printf("%d the number of friends",sum);

    return 0;
}