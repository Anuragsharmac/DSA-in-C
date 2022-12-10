#include<stdio.h>
struct student
{
    int r;
    char name[20];
    int m;
} S,*S1;
void main()
{
    S1=&S;
    for(int i =0;i<4;i++){

    
scanf("%d%s%d",&S1->r,&S1->name,&S1->m);
printf("%d%s%d",S1->r,S1->name,S1->m);
    }
    
}
