
#include<stdio.h>
void main()
{
int i,j,x,k=0;
printf("Enter number of rows\n");
scanf("%d",&x);
for(i=x;i>0;i--)
{
 for(j=0;j<i;j++)
printf(" ");
for(j=k;j>0;j--)
printf("%d",j);
for(;j<=k;j++)
printf("%d",j);
k++;
 printf("\n"); 


}
}
