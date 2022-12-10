#include<stdio.h>
struct students
{
  char name[10];
  int rollNum;
  int Marks;
  char Sub[10];
}s[4];
int main()
{
  for(int i=0;i<4;i++)
    scanf("%s%d%d%s",s[i].name,&s[i].rollNum,&s[i].Marks,s[i].Sub  );
  for(int i=0;i<4;i++)
    
    printf("%s\t%d\t%d\t%s\n",s[i].name,s[i].rollNum,s[i].Marks,s[i].Sub);
    return 0;
}
    