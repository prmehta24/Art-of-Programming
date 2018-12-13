#include<stdio.h>
void main()
{
float a,b,c;
printf("\n Enter the values of a,b,c \n");
scanf("%f %f %f",&a,&b,&c);
if((a==b)||(a==c)||(b==c))
{
printf("\nInvalid Input\n");
}
else
{
if(a>b)
{
	if(a>c)
	{
	printf("\n %f is the largest number\n",a);
	}
	else
	{
	printf("\n %f is the largest number\n",c);
	}
}
else 
{
	if(b>c)
	{
         printf("\n %f is the largest number.\n",b);
	}
	else
	{
         printf("\n %f is the largest number.\n",c);
	}

}
}
}


