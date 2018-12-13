#include<stdio.h>
#include<string.h>
void main()
{
char tmp;
int z;
z=0;
while(z==0)
{
int x,y;

printf("\nMain Menu\n");
printf("\nPress 1 to continue program\n");
printf("\nPress any other number to exit\n");
printf("\nEnter your choice\n");
scanf("%d",&x);
if(x==1)

{

printf("\nString Functions Menu\n");
printf("\n1-Title Case\n");
printf("\n2-Sentence Case\n");
printf("\n3-Upper Case\n");
printf("\n4-Lower Case\n");
printf("\n5-Toggle Case\n");
printf("\nPress any other number to return to Main Menu\n");
printf("\nEnter your choice.\n");
scanf("%d",&y);
switch(y)
{
case 1:
{
tmp=getchar();
char a[100];
printf("\nEnter a sentence\n");
gets(a);

int l;
l=strlen(a);
int i;
for(i=0;i<l;i++)
{
if((i==0)&&(a[i]!=' '))
{
if((a[i]>='a')&&(a[i]<='z'))
a[i]-=32;
}
else if((a[i]==' ')&&(a[i+1]!=' '))
{
if((a[i+1]>='a')&&(a[i+1]<='z'))
a[i+1]-=32;
}



}
printf("\nFinal Sentence:-\n");
puts(a);
break;
}
case 2:
{
tmp=getchar();
char a[100];
printf("\nEnter a sentence\n");
gets(a);

int l;
l=strlen(a);
int i;
for(i=0;i<l;i++)
{
if((i==0)&&(a[i]!=' '))
{
if((a[i]>='a')&&(a[i]<='z'))
a[i]-=32;
}
else if((a[i]=='.')&&(a[i+1]!=' '))
{
if((a[i+1]>='a')&&(a[i+1]<='z'))
a[i+1]-=32;
}



}
printf("\nFinal Sentence:-\n");
puts(a);
break;
}
case 3:
{
tmp=getchar();
char a[100];
printf("\nEnter a sentence\n");
gets(a);

int l;
l=strlen(a);
int i;
for(i=0;i<l;i++)
{

if((a[i]>='a')&&(a[i]<='z'))
a[i]-=32;


}




printf("\nFinal Sentence:-\n");
puts(a);
break;
}
case 4:
{
tmp=getchar();
char a[100];
printf("\nEnter a sentence\n");
gets(a);

int l;
l=strlen(a);
int i;
for(i=0;i<l;i++)
{

if((a[i]>='A')&&(a[i]<='Z'))
a[i]+=32;


}




printf("\nFinal Sentence:-\n");
puts(a);
break;
}
case 5:
{
tmp=getchar();
char a[100];
printf("\nEnter a sentence\n");
gets(a);

int l;
l=strlen(a);
int i;
for(i=0;i<l;i++)
{

if((a[i]>='a')&&(a[i]<='z'))
a[i]-=32;

else if((a[i]>='A')&&(a[i]<='Z'))
a[i]+=32;




}
printf("\nFinal Sentence:-\n");
puts(a);
break;
}
default:
{
printf("Invalid Choice-Returning to Main Menu");
break;
}
}

}
else
{
printf("\nExiting program\n");
z=1;
}

}







printf("\nGoodbye\n");
}
