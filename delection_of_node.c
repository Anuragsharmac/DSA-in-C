#include<stdio.h>
#include<stdlib.h>
struct node *delete(int key)
{
    struct node *curr = head;
    struct node *prev =NULL;
    if(head == NULL)
    return NULL;
    while(curr->data != key)
    {
     if(curr->next == NULL)
     {
        return NULL;
     }
        else
        {
            prev = curr;
            curr = curr -> next;
        }
    }
    if(curr == head)
    {
      head = head->next;
    }
return curr;
}