#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void push(int val)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void pop()
{   struct node *ptr;
    if(head==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("popped element = %d\n",head->data);
        ptr=head;
        head=head->next;
        free(ptr);
    }
}
void display()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;

    }

}
int main()
{
    push(3);
    push(4);
     push(5);
 push(6);
 push(8);
printf("linklist\n");
display();
pop();
display();

}