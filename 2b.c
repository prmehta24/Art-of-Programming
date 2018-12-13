#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,root1,root2;
printf("\n Enter the coefficients of a quadratic equation(a,b,c) \n");
scanf("%f %f %f",&a,&b,&c);
float d=((b*b)-(4*a*c));

if(d>=0)
{
float temp=sqrt(d);
root1=(-b+temp)/(2*a);
root2=(-b-temp)/(2*a);
printf("\n  The roots of the equation are %f and %f \n",root1,root2);
}
else
{
printf("\n Roots do not exist \n");
}
return 0;

}
