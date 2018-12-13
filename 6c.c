#include<stdio.h>
void print(int a,int b,int n)
{
if(n>1)
{
printf(" %d \n",b);
print(b,(a+b),(n-1));
}
else
printf("Done\n");
}
void main()
{
int n;
printf("Enter length of Fibonacci series\n");
scanf("%d",&n);
int a=0;
int b=1;
printf(" %d \n",a);
print(a,b,n);
}
