//Enter as many strings as needed. Sort by function using pointers only in alphabetical order.
#include<stdio.h>
void sort(int no,char (*ptr)[100])
{
    //printf("in\n");
    char temp1[100],temp2[100];
    int i,j;
  int k;
for(i=0;i<no;i++)
{
    //printf("i\n");


    for(j=0;j<no;j++)
    {
        for(k=0;k<100;k++)
    {
        temp1[k]=ptr[i][k];
        temp2[k]=ptr[j][k];
    }
    k=0;
    //printf("k\n");
      int diff;
       while(temp1[k]!='\0' || temp2[k]!='\0')
        {

            diff = temp1[k] - temp2[k];
            //printf("diff = %d\n",diff);
            if(diff!=0)
            {
                break;
            }
            k++;
        }
        if(diff==0)
            {}
        else if(diff>0)
        {//printf("%s comes after %s because diff is %d, i.e. s2 comes after s1",s2,s1,diff);
        }
        else if(diff<0)
        {
            //printf("i= %d k= %d",i,k);
            for(k=0;k<100;k++)
       {
           ptr[i][k]=temp2[k];
            ptr[j][k]=temp1[k];

       }
       //printf("%s",str);
       //printf("\n");


           // printf("%s comes after %s because diff is %d, i.e. s1 comes after s2",s1,s2,diff);
        }


    }
}
//char (*ptr)[100];
//ptr=v;
for(i = 0; i < no ;i++)
printf("%s \n",ptr[i]);

}
void main()
{

int no;
printf("Enter the number of strings.\n");
scanf("%d",&no);
no++;
char v[no][100];
char (*ptr)[100];
ptr=v;
//*ptr=v;
int i=0;
int j;
printf("Enter Strings\n");
for(i = 0; i < no ;i++)
fgets(ptr[i], sizeof(ptr[i]), stdin);
sort(no,ptr);

}
