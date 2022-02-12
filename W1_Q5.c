#include<stdio.h>

#define PI 3.141
void main()
{
    int radius,diameter;
    float circumference,area;
    printf("enter the radius of circle:\n");
    scanf("%d",&radius);
    diameter=2*radius;
    printf("Diameter of circle =%d\n",diameter);
    circumference=2*PI*radius;
    printf("Circumference of circle = %f\n",circumference);
    area=PI*radius*radius;
    printf("Area of circle = %f\n",area);

}
