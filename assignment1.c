
#include<stdio.h>
int main()
{
float area,circumference,radius;
printf("\n Enter the radius of  the circle:");
scanf("%f",&radius);
printf("\n Enter the circumference of the circle:");
scanf("%f",&circumference);
area=3.14*radius*radius;
circumference=2*3.14*radius;
printf("\n area of circle:%f",area);
printf("\n circumference of the circle:%f",circumference);
return 0;
}

