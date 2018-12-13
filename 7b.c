#include<stdio.h>
void main()
{
    int i=0;
    int z=0;
char a[100];
char ar[100];
printf("\n Enter a string \n");
gets(a);
int c=0;
while(a[c]!='\0')
    c++;
for(i=0;i<c;i++)
{
 ar[i]=a[c-1-i];
 if(ar[i]!=a[i])
 {
   z=1;
 }
 }
 if(z==0)
    printf("It is a palindrome");
 else
    printf("It is not a palindrome.");
}

