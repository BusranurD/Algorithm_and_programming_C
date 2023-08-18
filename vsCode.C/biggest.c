#include<stdio.h>
void biggest(int x[],int size){
    int max;
    max = x[0];
    int j=1; 
    while(j < 10){
        if( max < x[j] )
           max = x[j];
        j++;
    }
    printf("max: %d",max);
}
int big(){
    int i=0,num;
    int max=0;
    while(i < 10){
    printf("number?");
    scanf("%d",&num);
        if(max < num)
            max=num;
        i++;
    }
    printf("max: %d\n",max);
}
int main(){
    
    int num[10]; 
    int i=0;
    for( ; i < 10 ; i++ ){
        printf("number?");
        scanf("%d",&num[i]);
    }
    
    int max;
    max = num[0];
    int j=1; 
    while(j < 10){
        if( max < num[j] )
           max = num[j];
        j++;
    }
    printf("max: %d\n",max);
    printf("---\n");
    biggest(num,10);
    printf("\n---\n");
    big();
    return 0;
}