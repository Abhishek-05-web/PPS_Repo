// Q Write a program to check whether the number is negative or positive
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num>0){
        printf("%d is Positive",num);
    }
    else if(num==0){
        printf("%d is Zero",num);
    }
    else{
        printf("%d is Negative",num);
    }
    return 0;
}