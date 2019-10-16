#include <stdio.h>

int BinarySearch(int a[], int max, int e)
{
      int l=0,h=max-1, mid;
      while(l<=h)
      {
            mid=(l+h)/2;
            if(e>a[mid])
                  l= mid+1; 
            else if(e<a[mid])
                  h=mid-1; 
            else
                  return mid;
      }
      return -1;
}
 
int main()
{
      int i, e, size, a[50], position;
      printf("Enter the size of elements in array:\t");
      scanf("%d", &size);
      printf("Enter %d elements in array: \n", size);
      for(i= 0; i<size; i++)
      {
            scanf("%d", &a[i]);
      }
      printf("Enter element to search:\n");
      scanf("%d", &e);
      position = BinarySearch(a,size,e);
      if(position == -1) 
      {
            printf("Element %d not found\n", e);
      }
      else
      {
            printf("Element %d found at position %d\n", e, position + 1);
      }
      return 0;
}
