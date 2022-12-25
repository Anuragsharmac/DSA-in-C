#include<stdio.h>
struct student {
    int rollNumber;
    char name[20];
    float marks;
};
void main(){
   struct student s1;
   struct student s2;
   printf("enter info for student s1:");
   scanf("%d",&s1.rollNumber);
   printf("enter name:");
   scanf("%s",&s1.name);
   printf("enter marks")
   scanf("%f",&s1.marks);
   printf("rollnumber of student s1 is:%d\n Hello!%s \n marks of student s1 is: %f\n",s1.rollNumber,s1.name,s1.marks);
  
}