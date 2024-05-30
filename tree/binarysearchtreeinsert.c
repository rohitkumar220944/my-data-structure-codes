#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
    
};
struct node* createnode(int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct node* search(struct node *root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    else if(root->data>key)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }

}
void insert(struct node*root,int key)
{
    struct node*prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            printf("not insert %d ,already in bst",key);
            return;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else if(key>root->data)
        {
            root=root->right;
        }
    }
    struct node*new=createnode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else{
        prev->right=new;
    }
}

int main()
{
    struct node*p=createnode(5);
    struct node*p1=createnode(3);
    struct node*p2=createnode(6);
    struct node*p3=createnode(1);
    struct node*p4=createnode(4);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    struct node*n=search(p,2);
    if(n!=NULL)
    {
        printf("found :%d",n->data);
    }
    else{
        printf("element not fount \n");
    }
    insert(p,6);
    printf("%d",p->right->right->data);
return 0;
}