#include<stdio.h>
#include<stdlib.h>
struct data{
    int data;
    struct node * next;
}*head,*newNode,*temp;
void Create(int n);
void traverse();
int main()
{
    int n;
   scanf("%d",n);
   Create(n);
   traverse();
}
void Create(int n)
{
    head = (struct node*)malloc(sizeof( struct node));
    if(head == NULL)
    {
        printf("not allocation");
        exit(0);
    }
    scanf("%d",&data);
    
    head -> data = data;
    head -> next =NULL;
    temp = head;
    for(int i=2;i<=n;i++)
    {
        new = (struct node*)malloc(sizeof(struct node));
        if(new == NULL)
        {
            printf("no allocaton");
            exit(0);
            
        }
        scanf("%d",&data);
        new -> dataa = data;
        new -> next = NULL;
        temp -> next = new;
        temp = temp->next;
    }

}
void traverse()
{
    temp=head;
    while(temp != NULL)
    {
        printf("%d",temp -> data);
        temp=temp -> newNode;
    }
}
int count()
{
    int c = 0;
    temp = head;
    while(temp != NULL)
    {
        c++;
        temp = temp -> next;
    }
    return c;
}
struct node *n1(){
    struct node *temp=head;
    head = head->next;
    return(temp);
}
struct node
{
    int data;
    struct node*next;
};
