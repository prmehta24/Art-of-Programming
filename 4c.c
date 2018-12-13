#include<stdio.h>
void main()
{
 int i,j,k=1;
for(i=6;i>=1;i--)
{
  k=1;
	 for(j=1;j<=6;j++)
	{ 
	if(j<i)
  
    	  printf(" ");
    	  

	  else
          {
   	  printf("%d",k);
	   k++;
	}
	}
 	 printf("\n");
}


}
