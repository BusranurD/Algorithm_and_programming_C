#include <stdio.h>
int main(){

    int i=0,j;
    int num,k=0,cont=0;
 // add
            int count;
            printf("number of numbers?");
            scanf("%d",&count);
            int arr[count];
            for(; i < count ; i++)
                scanf("%d",&arr[i]); 

 // shearch
            printf("number to search\n");
            scanf("%d",&num);
            for( ; k<count ; k++){
                if(arr[k] == num)
                    cont=1;   
                else
                    continue; 
            }  
            if(cont==1)
                printf("there is\n");
            else
                printf("there is not\n");
 // show
            for(j=0 ; j<count ; j++) 
                printf("%d\n",arr[j]);

 // delete
            int number,w=0,c=0;
            printf("number to delete?\n");
            scanf("%d",&number);
            for( ; w<count ; w++){
                if(arr[w] == number){
                    c=1;
                    break;
                }
            }
            if(c == 1){
                int x=0,temp;
                for(x=w ; x<count ; x++){
                    temp= arr[x];
                    arr[x] = arr[x+1];
                    arr[x+1]=temp;
                }
                arr[count-1]=NULL;
                count--;
            }
            else
                printf("there is not number\n");

 // show
            for(j=0 ; j<count ; j++) 
                printf("%d\n",arr[j]);

 // sort
            printf("sort 1\n");
            int p=0,r,iter;
            for( ; p<count-1 ; p++){
                for(r=p+1 ; r<count ; r++){
                    if(arr[r]<arr[p]){
                        iter = arr[p];
                        arr[p]= arr[r];
                        arr[r]=iter;
                    }
                }
            }    

 // show
            for(j=0 ; j<count ; j++) 
                printf("%d\n",arr[j]);

 //sort 2
            printf("sort 2\n");
            int e=0,y=0;
            for( ; y< count ; y++){
                for( ; e<count-1 ; e++){
                    if(arr[e+1]<arr[e]){
                        iter = arr[e+1];
                        arr[e+1]= arr[e];
                        arr[e]=iter;
                    }
                }
            }

 // show
            for(j=0 ; j<count ; j++) 
                printf("%d\n",arr[j]);
    
    return 0;
}