
#include<stdio.h>
void main()
{
int i,j,x;


printf("Enter number of rows\n");
scanf("%d",&x);
int k=0; 
char c='*';
for(i=x;i>0;i--)
{
k++;
for(j=0;j<i;j++)
printf(" ");
for(j=0;j<k;j++)
printf(" %c",c);

 printf("\n"); 


}
for(i=1;i<=x;i++)
{
k--;
for(j=0;j<=i;j++)
printf(" ");
for(j=0;j<k;j++)
printf(" %c",c);

 printf("\n"); 


}
}
