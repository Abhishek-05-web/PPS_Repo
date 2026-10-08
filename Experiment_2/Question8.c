// Q Write the program to find Area of triangle , right angled triangle , area nad circumference of circle
#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    printf("For Area of triangle Enter 1\nFor Area of right angled triangle Enter 2\nFor Area of Circle Enter 3\nFor Circumference of circle Enter 4\n: ");
    scanf("%d",&choice);
    // 
    int a,b,c,base,height;
    float s,area,radius,circumference;
    float pi=3.14;
    // 
    switch (choice)
    {
        case 1:
            printf("Enter the sides of triangle: ");
            scanf("%d %d %d",&a,&b,&c);
            s=(a+b+c)/2;
            area=pow(s*(s-a)*(s-b)*(s-c),0.5);
            printf("Area of triangle: %f",area);
            break;
        case 2:
            printf("Enter the base and height of triangle: ");
            scanf("%d %d",&base,&height);
            area=base*height*1/2;
            printf("Area of triangle: %f",area);
            break;
        case 3:
            radius;
            printf("Enter the radius of circle: ");
            scanf("%f",&radius);
            area=pi*radius*radius;
            printf("Area of circle: %f",area);
            break;
        case 4:
            radius;
            printf("Enter the radius of circle: ");
            scanf("%f",&radius);
            circumference=2*pi*radius;
            printf("Circumference of circle: %f",circumference);
            break;
        default:
            printf("EXIT");
            break;
    }
    return 0;
}