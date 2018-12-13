#include<stdio.h>
void main()
{
int x;
printf("\n Enter the number of elements of array\n");
scanf("%d",&x);
float a[x], a2[x],arev[x];
int i;
float max;
for(i=0;i<x;i++)
{
printf("\nEnter element %d\n",(i+1));
scanf("%f",&a[i]);
if(i==0)
max=a[i];
if(a[i]>max)
max=a[i];

}
printf("\nThe largest element is %f\n",max);
printf("\nOriginal Array\n");
for(i=0;i<x;i++)
{
printf("%f ",a[i]);

}
for(i=0;i<x;i++)
{
a2[i]=a[i]*a[i];
}
for(i=0;i<x;i++)
{

arev[i]=a[x-i-1];

}

printf("\nSquared Array\n");
for(i=0;i<x;i++)
{
printf("%f ",a2[i]);

}
printf("\nReversed Array\n");
for(i=0;i<x;i++)
{
printf("%f ",arev[i]);

}

}
