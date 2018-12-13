#include<stdio.h>
#include<math.h>
void main()
{
int a;
printf("\nEnter a number.\n");
scanf("%d",&a);
int s=a;
int s2=s;
int p=0;
int c=-1;
while(s2>0)
{
s2/=10;
c++;
}

while(a>0)
{
p+=((a%10)*pow(10,c));
a/=10;
c--;
}
printf("\n %d is the reverse number\n",p);
if(p==s)
{
printf("\n %d is a palindrome\n",s);
}
else
{
printf("\n %d is not a palindrome\n",s);
}
}
