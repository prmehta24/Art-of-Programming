#include<stdio.h>
void main()
{
float r;

int s;
float a,b;
int c,d;

printf("\n Menu \n");
printf("\n1-Addition\n");
printf("\n2-Subtraction\n");
printf("\n3-Multiplication\n");
printf("\n4-Division\n");
printf("\n5-Modulus\n");
printf("\nSelect your choice\n");
scanf("%d",&s);
switch(s)
{
case 1:
{
printf("\nEnter values a and b\n");
scanf("%f %f",&a,&b);
 r=a+b;
}
break;
case 2:
{
printf("\nEnter values a and b\n");
scanf("%f %f",&a,&b);
r=a-b;
}
break;
case 3:
{
printf("\nEnter values a and b\n");
scanf("%f %f",&a,&b);
r=a*b;
}
break;
case 4:
{
printf("\nEnter values a and b\n");
scanf("%f %f",&a,&b);
r=a/b;
}
break;
case 5:
{
printf("\nEnter values c and d\n");
scanf("%d %d",&c,&d);
r=c%d;
}
break;
default:
{
printf("\nInvalid Choice\n");
}
break;
}
printf("\nThe result of your operation is %f \n",r);

}
