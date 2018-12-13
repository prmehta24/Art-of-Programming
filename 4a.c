#include<stdio.h>
#include<math.h>
void main()
{
  float no;
  int pwr;
  printf("\nEnter a number to be used in series\n");
  scanf("%f",&no);
  printf("\n Enter the power upto which you want to go to in series\n");
  scanf("%d",&pwr);
  float sum=0;
 int i;
  for( i=1;i<=pwr;i++)
  {
    int j=i-1;
    int p=pow((-1),j);
    float d=pow(no,i);
    float temp=(p*i)/d;
    sum+=temp;
 
  }
  printf("The sum of series is %f \n",sum); 
}
