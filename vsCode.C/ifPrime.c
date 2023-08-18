#include<stdio.h>

int main(){
    int num;
    printf("number?");
    scanf("%d",&num);
    int cont = 1,temp=0;
    int i=2;
    if(num == 1 || num <= 0)
        printf("number is not prime");
    else{
    for(; i < num ; i++){
        if( num%i == 0 ){
            cont=0;
            break;
        }
    } 
        if(cont == 0)
            printf("number is not prime");  
        else{
            printf("number is prime");  
                while(temp < 10){
                    num+=1;
                    int j=2,c=1;
                    for(;j < num; j++){
                        if(num%j == 0){
                        c = 0;
                        break;
                        }
                    }
                    if(c == 1){
                    printf("\n%d",num);
                    temp++;                    
                    }    
                    else
                        continue;                    
                }
        }
    }

    return 0;
}