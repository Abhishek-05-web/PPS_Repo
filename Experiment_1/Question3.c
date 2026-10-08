// Q Write a program to convert temperature in celsius to fahrenheit and vice-versa. 
#include<stdio.h>
int main()
{
   int choice;
   float tempGiven,tempConverted;
   printf("Celsius to Fahrenheit Enter 1 and Farhenheit to Celsius Enter 2 : ");
   scanf("%d",&choice);
//    Celcius to Fareheit
   if(choice==1){
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&tempGiven);
    tempConverted=(9*tempGiven/5)+32;
    printf("Temperature in fahrenheit is: %f",tempConverted);
   }
//    Fereheit to Celcius
    if(choice==2){
    printf("Enter the temperature in Fereheit: ");
    scanf("%f",&tempGiven);
    tempConverted=(tempGiven-32)*5/9;
    printf("Temperature in Celcius is: %f",tempConverted);
   }
    return 0;
}