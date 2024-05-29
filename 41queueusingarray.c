#include<stdio.h>
#include<stdlib.h>
struct queue 
{
    int size;
    int r;
    int f;
    int *arr;
};
int isfull(struct queue *q)
{
    if(q->r==q->size-1)
    {
        // printf("queue is overflow");
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct queue *q)
{
    if(q->f==q->r)
    {
        //printf("this queue is empty")
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q,int val)
{   if(isfull(q))
    {
        printf("this queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("enqueue element :%d\n",val);
    }

}
 int dequeue(struct queue *q)
 {  int a=-1;
    if(isempty(q))
    {
        printf("this queue is empty\n");
    }
    else
    {
        q->f++; 
        a=q->arr[q->f];
    }
    return a;
 }
int main()
{
    struct queue q;
    q.size=10;
    q.r=-1;
    q.f=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,23);
    enqueue(&q,3);
    printf("dequeue element:%d\n",dequeue(&q));
     if(isfull(&q))
     { printf("queue is full\n");}
     if(isempty(&q))
     { printf("queue is empty\n");}
    return 0;
}