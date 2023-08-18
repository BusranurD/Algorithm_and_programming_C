#include<stdio.h>

int evenORodd(int n){
    
    if(n % 2 == 1 || n & 2 == -1)
        return 1;
    else 
        return 0;
    
}


int main(){
    int num;
    printf("number?");
    scanf("%d",&num);

    if(num % 2 == 1 || num % 2 == -1 ) 
        printf("number is odd number");
    else
        printf("number is even number");
       
    printf("\n---\n");

    int i;
    i = evenORodd(num);

    if(i==1)    
        printf("number is odd number");
    else
        printf("number is even number");
        
    return 0;
}