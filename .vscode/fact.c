#include <stdio.h>
int factorial(int n);
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	printf("factorial of number is:%d",factorial(num));
	return 0;
}

int factorial(int n)
{
	if (n == 0)
      return 1;
	return n * factorial(n - 1);
}

