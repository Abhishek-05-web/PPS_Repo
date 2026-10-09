// Q Write a program to find the roots of the quadratic
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the coefficient of x^2, x and constant term: ");
    scanf("%d %d %d",&a,&b,&c);
    float D=pow(b,2)-4*a*c;
    float x1=(-b+pow(D,0.5))/(2*a);
    float x2=(-b-pow(D,0.5))/(2*a);
    printf("Roots of Quadratic: %f and %f",x1,x2);
    return 0;
}