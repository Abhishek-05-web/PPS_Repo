// Q Write a program to implement the Heron's Formula
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    float s=(a+b+c)/2;
    float area=pow(s*(s-a)*(s-b)*(s-c),0.5);
    printf("Area of triangle is : %f",area);
    return 0;
}