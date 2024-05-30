#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void createlist(int n)
{
    struct node *head,*newnode,*temp;
 int i,data;
    for(i=1;i<=n;i++)
    {
      head=(struct node *)malloc(sizeof(struct node));
      printf("enter data:");
      scanf("%d",&data);
      head->data=data;
      head->next=NULL;
      
    }
}
void traverselist()
{
    struct node *temp,*head;
    temp=head;
    while(temp!=NULL)
    {
        printf("data=%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
    { struct node *head;
     head = NULL;
        int n;
        printf("enter no of element:");
        scanf("%d",&n);
        createlist(n);
        traverselist();

    }
