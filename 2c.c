#include<stdio.h>
void main()
{
float h,pay;
printf("\n Enter hours taken to complete process \n");
scanf("%f",&h);
if(h<=48)
{
pay=2000*h;
}
else if((h>48)&&(h<=240))
{
pay=(48*2000)+((h-48)*4000);
}
else
{
pay=(48*2000)+((240-48)*4000)+((h-240)*10000);
}
printf("\n The company charges are %f rupees \n ",pay);
}
