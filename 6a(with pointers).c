#include<stdio.h>
int *printUnion(int arr1[], int arr2[], int m, int n,int r[])
{
  int i = 0, j = 0,c=0,k=0;

for(i=0;i<m;i++)
{
    r[i]=arr1[i];
}
for(j=0;j<n;j++)
{
    r[i++]=arr2[j];
}


  r[i]=-9999;
  for(i=0;i<(m+n);i++)

  {
      printf(" i is %d \n",i);


      for(j=i+1;j<(m+n);j++)
      {
         printf(" j is %d \n",j);
         if(r[i]==r[j])
         {

         printf("match\n");
         r[j]=-9999;
         }
      }
  }
  i=0;
  while(i<(m+n))
  {
  printf(" %d ",r[i++]);
  }

 return r;

}

int *printIntersection(int arr1[], int arr2[], int a, int b,int r[])
{
  int i = 0, j = 0,c=0;


  while (i < a && j < b)
  {
    if (arr1[i] < arr2[j])
      i++;
    else if (arr2[j] < arr1[i])
      j++;
    else /* if arr1[i] == arr2[j] */
    {
       r[c++]=arr2[j++];
      i++;
    }
  }
  r[c]=-9999;
  i=0;
  while(r[i]!=-9999)
  {
  printf(" %d ",r[i++]);
  }
  return r;
}

main()
{
  int i,j,x,y,*p;

  printf("Enter number of elements in 1st set: ");
  scanf("%d",&x);
  printf("Enter number of elements in 2nd set: ");
  scanf("%d",&y);

  int arr1[x],arr2[y];
  int r[x+y];

  printf("1st set\n");
  for(i=0;i<x;i++)
  {
      printf("Enter element %d: ",i+1);
      scanf("%d",&arr1[i]);
  }

  printf("2nd set\n");
  for(j=0;j<y;j++)
  {
      printf("Enter element %d: ",j+1);
      scanf("%d",&arr2[j]);
  }

  printf("Union of the two sets is: ");
  p=printUnion(arr1, arr2, x, y,r);
  int c1=0,c2=0;
  for ( i = 0; i < (x+y); i++ )
  {


      int z=*p;
      if(z==(-9999))
      {
          p++;


      }
      else
      {

      c1++;
      printf("%d \n", *p);
      p++;
      }



      }
      if(c1==0)
      printf("No elements in union");

  printf("\n");

  printf("Intersection of the two sets is: ");
  p=printIntersection(arr1, arr2, x, y,r);
  for ( i = 0; i < (x+y); i++ )
  {
      int z=*(p+i);
      if(z==(-9999))
      {
          printf("break;");
      break;
      }

      else
      {
          c2++;
        printf("%d \n", *p);
      p++;
      }


      }
      printf("out");
      if(c2==0)
      printf("No elements in intersection");

}

