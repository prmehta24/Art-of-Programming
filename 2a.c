#include<stdio.h>
int main()
{
  float r,l,b,area,perimeter;
printf("Enter the radius of circle \n");
scanf("%f",&r);
printf("Enter length and breadth of rectangle \n");
scanf("%f %f",&l,&b);
area=3.14*r*r;
perimeter=2*3.14*r;
printf("\n The area and perimeter of cirle is %.3f and %.3f",area,perimeter);
area=l*b;
perimeter=2*(l+b);
printf("\n The area and perimeter of rectangle is %.3f and %.3f \n",area,perimeter);
return 0;
}
