#include<stdio.h>

int main(){

    int num[10]; 
    int i=0;
    for( ; i < 10 ; i++ ){
        printf("number?");
        scanf("%d",&num[i]);
    }
    
    int max,max2;
    max = num[0];
    int j=1,k=1; 
    while(j < 10){
        if( max < num[j] )
            max = num[j];
        j++;
    }
    int w=0;
    while(w<10){
        if(num[w] == max)
            num[w]=0;
        w++;
    }
    max2=num[0];
    while(k < 10){
        if( max2 < num[k])
            max2 =num[k];
        k++;
   }
    printf("max: %d\tmax2: %d",max,max2);
    return 0;
}