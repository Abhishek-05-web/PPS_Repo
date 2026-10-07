// Q Write a program to design a calculator using switch statement
#include<stdio.h>
int main(){
    float a,b;
    float Sum,Sub,Prod,Div;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    // =====================
    int choice;
    printf("For Addition Enter 1\nFor Substraction Enter 2\nFor Multiplication Enter 3\nFor Division Enter 4\n: ");
    scanf("%d",&choice);
    //    =======================
    switch (choice)
    {
    case 1:
        Sum=a+b;
        printf("Addition: %f",Sum);
        break;
    case 2:
        Sub=a-b;
        printf("Subtraction: %f",Sub);
        break;
    case 3:
        Prod=a*b;
        printf("Multiplication: %f",Prod);
        break;
    case 4:
        Div=a/b;
        printf("Division: %f",Div);
        break;
    default:
        printf("EXIT");
        break;
    }
    return 0;
}