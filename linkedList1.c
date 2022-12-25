
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head, *new, *temp;
void create(int n)
{
    int data;
    head = (struct node *) malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("no any allocation\n");
        exit(0);        
    }
    printf("enter the data for head\n");
    scanf("%d",&data);
    
    head->data = data;
    head->next=NULL;
    temp=head;
     printf("enter the data for new node\n");
    for (int i = 2; i <=n; i++)
    {
        new = (struct node *) malloc(sizeof(struct node));
        if (new == NULL)
        {
            printf("no any allocation");
            exit(0);
        }
   
    scanf("%d",&data);
    new->data=data;
    new->next=NULL;
    temp->next=new;
    temp = temp->next;
    }
}
void traverse()
{
    temp = head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
}
struct node *delete(int key)
{
    struct node *current = head;
    struct node * previous = NULL;
    if (head==NULL)
    {
        return NULL;
    }

    
    while (current->data!=key)
    {
        if (current->next==NULL)
        {
            return NULL;
        }
        else
        {
            previous = current;
            current=current->next;
        }
    }
    if (current == head)
    {
        head = head->next;
    }
    else
    {
        previous->next=current->next;
    }
    
}
int main()
{
    int n, key;
    printf("enter number of nodes\n");
    scanf("%d",&n);
    create(n);
    printf("enter the data to be deleted\n");
    scanf("%d",&key);
    struct node *t = delete(key);
    printf("deleted node= %d",t->data);
    printf("\nafter deletion remaning list is:");
    traverse();

}
