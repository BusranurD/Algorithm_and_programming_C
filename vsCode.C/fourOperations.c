#include<stdio.h>

int main(){
    int a,b;
    char ope;
    int ans;
    printf("operation?\n");
    scanf("%d%c%d",&a,&ope,&b);
    switch(ope){
        case '+':
            ans = a+b;
        break;
        case '-':
            ans = a-b;
        break;
        case '*':
            ans = a*b;
        break;
        case '/':
            ans = a/b;
        break;
        default:
            printf("error!");
            return 0;
    }
         printf("answer = %d",ans);;
    return 0;
}