#include<stdio.h>
#include<stdlib.h>
struct node
{   int data;
    struct node *next;
};
/*void createlist( int n)
{
    struct node *newnode,*temp,*head;
    int data,i;
    head=(struct node *)malloc(sizeof(struct node));
    printf("enter node data:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter node data:",&i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}*/
void traverselist()
{
    struct node *temp,*head;
    temp=head;
    while(temp!=NULL)
    {
        printf("data=%d\n",temp->data);
        temp=temp->next;
    }
    void insertatfirst()
    {
        struct node *head,*ptr;
        int data;
        printf("enter the new element  inserted:");
        scanf("%d",&data);
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=head;
    }
    
}
int main()
{struct node *head;
    int n;
    printf("enter num of list element:");
    scanf("%d",&n);
    struct node *newnode,*temp;
    int data,i;
    head=(struct node *)malloc(sizeof(struct node));
    printf("enter node data:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter node data:",&i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
    traverselist();
    insertatfirst();
    traverselist();
}