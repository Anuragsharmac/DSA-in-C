#include<stdio.h>
void linearSearch(int arr[],int i,int data);
int main()
{
    int data;
    int i;
    int arr[]={10,11,12,13,14,15,16};
    printf("Enter the data");
    scanf("%d",&data);
    linearSearch(arr,7,data);
    return 0;

}
void linearSearch(int arr[],int i,int data)
{
for(int i=0;i<7;i++)
{
if(arr[i]==data)
{
    printf("data is found at the index:%d",i);
    break;
}
}
if(arr[i]!=data){
    printf("data is not found");
}
}