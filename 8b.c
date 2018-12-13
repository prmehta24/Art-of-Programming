#include<stdio.h>
struct length
{
int feet;
float inch;
}x[3];
void add()
{
x[3].feet=x[0].feet+x[1].feet;
x[3].inch=x[0].inch+x[1].inch;
printf("Total length is %d feet and %f inches\n",x[3].feet,x[3].inch);
}
void main()
{

int i=0;
for(i=0;i<2;i++)
{
printf("Enter length %d in feet\n",(i+1));
scanf("%d",&x[i].feet);
printf("Enter length %d in inches\n",(i+1));
scanf("%f",&x[i].inch);
}
add();

}
