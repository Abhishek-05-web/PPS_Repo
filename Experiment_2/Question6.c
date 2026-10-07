// Q Write the program to check whether the date is valid or not
#include<stdio.h>
#include<ctype.h>
int main(){
    int Day,Month,Year;
    printf("Enter Date in formate DD MM YYYY: ");
    scanf("%d %d %d",&Day,&Month,&Year);
    // condition:Checking 31days month
    if((Month==1||Month==3||Month==5||Month==7||Month==8||Month==10||Month==12)&&(Day>=1&&Day<=31)){
        printf("Date is valid");
    }
    // Condition: Checking 30days month
    else if((Month==4||Month==6||Month==9||Month==11)&&(Day>=1&&Day<=30)){
        printf("Date is valid");
    }
    // Condition: Checking February month for leap year
    else if(((Year%400==0)||(Year%4==0&&Year%100!=0))&&(Month==2)&&(Day>=1&&Day<=29)){
        printf("Date is valid");
    }
    // Condition: Checking February month for non-leap year
    else if(Month==2&&(Day>=1&&Day<=28)){
        printf("Date is valid");
    }
    else{
        printf("Date is NOT Valid!!!");
    }
    return 0;
}