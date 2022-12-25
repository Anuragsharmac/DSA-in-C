#include<stdio.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
};

 main(){
    struct node*root = (struct node*)malloc(sizeof(struct node));
    root = newnode(1);
    root-> left = newnode(2);
    root ->right = newnode(3);
    root -> left ->newnode= newnode(4);
    root -> right -> right = newnode(5);
}