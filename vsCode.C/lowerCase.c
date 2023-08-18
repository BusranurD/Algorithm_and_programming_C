#include<stdio.h>

int main(){
    char text[100];
    printf("enter text: ");
    scanf("%s",text);
    int i=0;
    for(; text[i] != '\0'; i++){
        if( text[i] >= 'A' && text[i] <='Z')
            text[i]+=32;
    }
    printf("%s",text);

    return 0;
}