#include<stdio.h>
void prime(int a, int b){
    int j;
    if(a < 0 && b < 0)
        printf("error!");
    else{
    for(j=a ; j<=b ; j++){
        if(j == 1 || j <= 0)
           continue;
        else{
        int i=2;
        int cont = 1;
        for(; i < j ; i++){
            if( j%i == 0 ){
                cont=0;
                break;
            }  
    } if(cont == 1)
        printf("%d\n",j);
    }
    }
}}


int main(){
    int num;
    printf("number?");
    scanf("%d",&num);
    int cont = 1;
    float ans;
    int i=2;
    if(num == 1 || num <= 0)
        printf("error!");
    else{
    for(; i <= num-1 ; i++){
        if( num%i == 0 ){
            cont=0;
            break;
        }
    } 
        if(cont == 0)
            printf("number is not prime");  
        else   
            printf("number is prime");
    }
    printf("\n---\n");
    int a,b;
    printf("distance?");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}