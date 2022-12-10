#include<stdio.h>
int main()
{
      int n;
      printf("enter number =");
      scanf("%d",&n);
      int k=1;
      factorial(n,k);
      int x= factorial(n,k);
      printf("factorial = %d",x );
}
 int factorial(int n,int k)
 {
       if(n==0)
       return k;
      
       return factorial(n-1,k*n);
 }