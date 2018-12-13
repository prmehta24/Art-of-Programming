#include<stdio.h>
void main()
{
char c;
printf("\n Enter a character to check category. \n");
scanf("%c",&c);
if((c>=97)&&(c<=122))
{
printf("\n It is a lowercase letter. \n");
}
else if((c>=65)&&(c<=90))
{
printf("\n It is a uppercase letter. \n");
}
else if((c>=48)&&(c<=57))
{
printf("\n It is a number. \n");
}
else if(c==32)
{
printf(" \n It is a space. \n");
}
else
{
printf("\n It is not a recognizable character. \n");
}
}
