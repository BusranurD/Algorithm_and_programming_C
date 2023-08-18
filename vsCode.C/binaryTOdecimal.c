#include<stdio.h>

int main(){
    char num[100];
    printf("number?");
    scanf("%s",&num);
    int number[100];
    int i=0,count=0,sum;
    for(; num[i]!= '\0'; i++){
        number[i]=num[i] - 48;
        count++;
    }
   
    if(number[count-1] == 1)
        sum=1;
    else    
        sum=0;
    int w,x;
    
    for( w=0; w<count-1; w++){
        int mult=1;
        for(x=w; x<count-1 ; x++){
            mult*=2;
        }
        sum+=(number[w] * mult);
    }
    printf("%d",sum);
    return 0;
}