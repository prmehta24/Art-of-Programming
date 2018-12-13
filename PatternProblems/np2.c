
#include<stdio.h>
void main()
{
int i,j,x;


printf("Enter number of rows\n");
scanf("%d",&x);
int k=x; 
for(i=0;i<x;i++)
{
char c='a';
 for(j=0;j<i;j++)
{
printf(" ");
}
for(j=0;j<k;j++)
{
 printf(" %c",c);
c++;
}
k--;
 printf("\n"); 


}
}
