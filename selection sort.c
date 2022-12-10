#include <stdio.h>
void main()
{
      int n,a[10],min;
      printf("enter the number of elements in array :");
      scanf("%d",&n);
      printf("enter the elements of array:");
      for (int i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
      }
      min=a[0];
      for(int i=0;i<n;i++)
      {
            min=i;
            for (int j=i+1;j<n;j++)
            {
               if(a[min]>a[j])
                  min=j;
            }
               if(min!=i)
               {
                  int t=a[i];
                  a[i]=a[min];
                  a[min]=t;
               } 
            
      }
      //print statement
      for(int i=0;i<n;i++)
      {
            printf("%d",a[i]);
      }
}