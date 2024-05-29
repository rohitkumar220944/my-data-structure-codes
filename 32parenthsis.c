#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char push(struct stack*ptr,char val)
{
    if(isfull(ptr))
    {
        printf("stack is overflow! cannot push %d",val);
        
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack* ptr)
{
    if(isempty(ptr))
    {
        printf("stack underflow! cannot pop");
        return -1;
    }
    else
    {
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesis(char *exp)
{
   struct stack*sp;
    sp->size=100;
   sp->top=-1;
 sp->arr=(char*)malloc(sp->size* sizeof(char));

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(sp,'(');
        }
        else if(exp[i]==')')
        {
            if(isempty(sp))
            {return 0;}
            else
            {
                pop(sp);
            }
        }
    }
     if(isempty(sp))
     {
        return 1;
     }
     else
     {
        return 0;
     }
}
int main()
{
    char *exp="9*7(8%7))";
   if(parenthesis(exp))
   {
    printf("parenthesis match");
   }
   else{
    printf("parenthesis not match");
   }
   return 0;
}