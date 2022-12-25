#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int main(){
struct node * head;
struct node * second;
struct node * third;
struct node * fourth;
//creatin memory in heap
head = (struct node *) malloc(sizeof(struct node));
second = (struct node *) malloc(sizeof(struct node));
third =(struct node *) malloc(sizeof(struct node));
fourth =(struct node*) malloc(sizeof(struct node));
//linking the node
head ->data = 7;
head ->next = second;
second ->data=11;
second -> next = third;
third -> data = 14;
third -> next = fourth;
fourth ->data =69;
fourth -> next = NULL;
return 0;
}
