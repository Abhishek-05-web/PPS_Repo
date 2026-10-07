// Q Write a program to calculate Simple Interest and Compound Interest
#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate;
    int time;
    printf("Enter the principal Amount: ");
    scanf("%f",&principal);
    printf("Enter the annaul rate: ");
    scanf("%f",&rate);
    printf("Enter the time in year: ");
    scanf("%d",&time);
    float simpInterest,compInterest;
    // Calculating Simple interest
    simpInterest=(principal*rate*time)/100;
    printf("Simple Interest: %f\n",simpInterest);
    // Compound Interest
    compInterest=principal*(pow((1+rate/100),time)-1);
    printf("Compound Interest: %f",compInterest);
    return 0;
}
