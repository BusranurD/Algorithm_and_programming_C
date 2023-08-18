#include<stdio.h>

int main(){
    char text[100];
    printf("enter text: ");
    scanf("%s",text);
    if( text[0] >= 'a' && text[0] <='z')
        text[0]-=32;
    int i=1;
    for(; text[i]!='\0' ; i++){
        if(text[i]==' '){
            i++;
            if(text[i] >= 'a' && text[i] <='z')
                text[i]-=32;
        }
        continue;        
    }
    printf("%s",text);

    return 0;
}