#include<stdio.h>
void main()
{
int z=0;
int rc;
printf("\nEnter number of rows and columns\n");
scanf("%d",&rc);
int m[rc][rc];
int tr[rc][rc];
int i,j;
for(i=0;i<rc;i++)
{
for(j=0;j<rc;j++)
{
printf("\n Enter element of row %d and column %d \n",(i+1),(j+1));
scanf("%d",&m[i][j]);

}
}
printf("Original Matrix\n");
for(i=0;i<rc;i++)
{
for(j=0;j<rc;j++)
{
printf("%d",m[i][j]);
tr[i][j]=m[j][i];
}
printf("\n");
}
printf("Transpose Matrix\n");
for(i=0;i<rc;i++)
{
for(j=0;j<rc;j++)
{
printf("%d",tr[i][j]);
if(m[i][j]!=tr[i][j])
z++;
}
printf("\n");
}
if(z==0)
printf("Symmetric Matrix\n");
else
printf("Non-Symmetric Matrix\n");

}
