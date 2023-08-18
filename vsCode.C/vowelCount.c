#include<stdio.h>

int main(){
    char text[100];
    printf("enter text: ");
    scanf("%s",text);
    int i=0,count=0;
    for (;text[i] != '\0';i++){
        if(text[i]== 'a' || text[i]== 'e' || text[i]== 'ı' || text[i]== 'i' || text[i]== 'o' || text[i]== 'ö' || text[i]== 'u' || text[i]== 'ü'  ||  text[i]== 'A' || text[i]== 'E' || text[i]== 'I' || text[i]== 'İ' || text[i]== 'O' || text[i]== 'Ö' || text[i]== 'U' || text[i]== 'Ü')
            count++;
        else  
            continue;  
    }
    printf("%d",count);
    
    
    return 0;
}  