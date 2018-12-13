#include<stdio.h>
void main()
{
int i,j,k=0,x;
printf("Enter number of rows\n");
scanf("%d",&x);
for(i=x;i>0;i--)
{k++;
 for(j=1;j<i;j++)
{
 printf(" ");
}
for(j=0;j<k;j++)
{
printf(" %d",i);
}
 printf("\n"); 

}
}
