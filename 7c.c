#include<stdio.h>
void main()
{
    int j=0;
    int i=0;
    int z=0;
    int c1=1;
char a[100];
int ac[100];
for(i=0;i<100;i++)
    ac[i]=0;
char anrd[100];
printf("\n Enter a string \n");
gets(a);
int c=0;
while(a[c]!='\0')
    c++;
for(i=0;i<c;i++)
{
if((a[i]>=65)&&(a[i]<=91))
    a[i]=a[i]+32;

}
    anrd[0]=a[0];
for(i=1;i<c;i++)
{
z=0;
for(j=0;j<c1;j++)
{
if(anrd[j]==a[i])
{
z=1;
}
}
if(z!=1)
{
   anrd[i]=a[i];
c1++;
}



}
for(i=0;i<c1;i++)
{
  for(j=0;j<c;j++)
  {
     if(anrd[i]==a[j])
        ac[i]++;
  }

}
for(i=0;i<c1;i++)
{
if(ac[i]>1)
{
  printf("\n %c has been repeated %d times \n",anrd[i],ac[i]);
}
}
}




