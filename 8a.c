#include<stdio.h>
void main()
{
int employees;
printf("Enter the amount of employees whose data is to be stored\n");
scanf("%d",&employees);
struct data
{
float basic,DA,HRA,Itax,total,TA, Net;
}x[employees];

int i=0;
for(i=0;i<employees;i++)
{
printf("Enter basic package for employee %d \n",(i+1));
scanf("%f",&x[i].basic);
x[i].DA=.5*x[i].basic;
x[i].HRA=.15*x[i].basic;
x[i].TA=400;
x[i].total=x[i].basic+x[i].DA+x[i].HRA+x[i].TA;
x[i].Itax=.05*x[i].total;
x[i].Net=x[i].total-x[i].Itax;
printf("The net salary of employee %d is %f\n",(i+1),x[i].Net);

}




}
