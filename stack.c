#include<stdio.h>

int Push(stack,size,item,top);
int Pop(stack ,size,top);
int main()
{  
    int top;
    int size;
    if(top==size)
    printf("overflow");
    Push(Stack,size,item,top);
    Pop(stack,size,top);
    return 0;
}
int push(stack,size,item,top)
{
    
     top = top +1;
     Stack[top]=item;
     return Push;
                 
     
}
int Pop(stack,size,top);
{
    item=stack[top];
    
    top = top -1;
    return Pop;
}