// Q Write the program to find Area of triangle , right angled triangle , area nad circumference of circle
#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    printf("For Area of triangle Enter 1\nFor Area of right angled triangle Enter 2\nFor Area of Circle Enter 3\nFor Circumference of circle Enter 4\n: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            int a,b,c;
            printf("Enter the sides of triangle: ");
            scanf("%d %d %d",&a,&b,&c);
            float s=(a+b+c)/2;
            float area=pow(s*(s-a)*(s-b)*(s-c),0.5);
            printf("Area of triangle:%f",area);
            break;
        case 2:
            int base,height;
            printf("Enter the base and height of triangle: ");
            scanf("%d %d",&base,&height);
            area=base*height*1/2;
            printf("Area of triangle: ",area);
            break;
        case 3:
            float radius;
            printf("Enter the radius of circle: ");
            scanf("%f",&radius);
            float pi=3.14;
            float area=pi*radius*radius;
            print("Area of circle:%f",area);
            break;
        case 4:
            float radius;
            float pi=3.14;
            float circumference=2*pi*radius;
            printf("Circumference of circle: %f",circumference);
            break;
        default:
            printf("EXIT");
            break;
    }
    return 0;
}