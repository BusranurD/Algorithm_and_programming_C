#include<stdio.h>

int main(){
    int a,b;
    int ans=1;
    // a is bas, b is exponent
    printf("base?");
    scanf("%d",&a);
    printf("exponent?");
    scanf("%d",&b);


    if(b < 0){
            b = b*(-1);
            for(int i=0; i<b ;i++){
                 ans *= a;
            }
            printf("1/%d",ans);
    }
    else{
    for(int i=0; i<b ;i++){
        ans *= a;
    }
    printf("%d",ans);
    }

    return 0;
}