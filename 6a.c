#include<stdio.h>
int printUnion(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (arr1[i] < arr2[j])
      printf(" %d ", arr1[i++]);
    else if (arr2[j] < arr1[i])
      printf(" %d ", arr2[j++]);
    else
    {
      printf(" %d ", arr2[j++]);
      i++;
    }
  }

  while(i < m)
   printf(" %d ", arr1[i++]);
  while(j < n)
   printf(" %d ", arr2[j++]);
}

int printIntersection(int arr1[], int arr2[], int a, int b)
{
  int i = 0, j = 0;
  while (i < a && j < b)
  {
    if (arr1[i] < arr2[j])
      i++;
    else if (arr2[j] < arr1[i])
      j++;
    else /* if arr1[i] == arr2[j] */
    {
      printf(" %d ", arr2[j++]);
      i++;
    }
  }
}

main()
{
  int i,j,x,y;

  printf("Enter number of elements in 1st set: ");
  scanf("%d",&x);
  printf("Enter number of elements in 2nd set: ");
  scanf("%d",&y);

  int arr1[x],arr2[y];

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
  printUnion(arr1, arr2, x, y);
  printf("\n");
  printf("Intersection of the two sets is: ");
  printIntersection(arr1, arr2, x, y);
}

