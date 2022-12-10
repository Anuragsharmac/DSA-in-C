#include<stdio.h> 
void Toh(int n,char A,char B,char C)
{
    if(n==1){
    printf("move disc %d from %c to %c",n,A,C);
    Toh(n-1,A,C,B);
    }
    else
    {

    printf("move disc %d from %c to %c ",n,A,B);
    Toh(n-1,B,A,C);
    }
}
int main()
{
Toh(3,'A','B','C');
}