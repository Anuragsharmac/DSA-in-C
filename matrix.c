#include <stdio.h>
#include <math.h>
#define MAX 100
int find_element(int element);
int arr[MAX],n;
int main()
{
   int i,element,result;
   printf("Enter the number of elements:\n ");
   scanf("%d",&n);
   
   printf("Enter the elements of array: \n");
   for(i=0;i<n;i++)
   {
         scanf("%d",&arr[i]);
   }
      printf("Enter the element you want to search:\n ");
      scanf("%d",&element);
	  
      result=find_element(element);
      if(result==-1)
      {
            printf("Element is not found in the array\n");
      }
      else
      {
            printf("Element %d is present at position %d\n",element,result);
      }
      return 0;
}
int find_element(int element)
{
   int jump_step,prev=0;
   jump_step=floor(sqrt(n));
  
   while(arr[prev]<element)
   {
       if(arr[jump_step]>element || jump_step>=n)
       {
            break;
       }
       else
       {
                prev=jump_step;
                jump_step=jump_step+floor(sqrt(n));
       }
   }
   while(arr[prev]<element)
   {
        prev++;
   }
   if(arr[prev]==element)
   {
        return prev+1;
   }
   else
   {
        return -1;
   }
}