#include<stdio.h>
#include<string.h>
int main(){
    char text[100];
    printf("enter text: ");
    scanf("%s",text);
    int i=0,j; 
    j=strlen(text);
    char temp;
    for(; i < strlen(text)/2 ; i++){
            temp=text[i];
            text[i]=text[j-i-1];
            text[j-i-1]=temp;
    }
    printf("%s",text);

    return 0;
}