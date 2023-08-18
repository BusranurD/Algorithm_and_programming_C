#include<stdio.h>

#define pi 3.14

void circumference(float r){
    float circ = 2*pi*r;
    printf("%.2f\n",circ);
}

void area(float r){
    float area = pi*r*r;
    printf("%.2f",area);
}

int main(){

    float radius;
    printf("enter radius:");
    scanf("%f",&radius);

    printf("diameter = %.2f\n", radius*2);

    //circumference
    printf("circumference = %.2f\n",2*radius*pi);

    //area of circle
    printf("area = %.2f\n",pi*radius*radius);

    printf("----\n");
    
    circumference(radius);
    area(radius);

    return 0;
}