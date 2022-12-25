#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void traversing(struct node*ptr)
{
 while(ptr != NULL)
 {
  printf("%d\n",ptr -> data);
  ptr = ptr -> next;
 }
}
int main(){
struct node * head;
struct node * second;
struct node * third;
struct node * fourth,*newnode;

//creatin memory in heap
head = (struct node *) malloc(sizeof(struct node));
second = (struct node *) malloc(sizeof(struct node));
third =(struct node *) malloc(sizeof(struct node));
fourth =(struct node*) malloc(sizeof(struct node));
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter the data you want to insert at first:\n");
    scanf("%d",&newnode->data);
    newnode -> next = head;
    head = newnode;
//linking the node
head ->data = 7;
head ->next = second;
second ->data=11;
second -> next = third;
third -> data = 14;
third -> next = fourth;
fourth ->data =69;
fourth -> next = NULL;
traversing(head);
return 0;
}

