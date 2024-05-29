#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int r;
    int f;
    int* arr;
};
int isfull(struct queue *q)
{
     if((q->r+1)%q->size==q->f)
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
void enqueue(struct queue* q,int val)
{
    if(isfull(q))
    {
        printf("queue is overflow\n");
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("enqueue element:%d\n",val);
    }
}
int dequeue(struct queue *q)
{
    int val=-1;
    if(isempty(q))
    {
        printf("queue is empty\n");
    }
    else
    {
      q->f=(q->f+1)%q->size;
      val=q->arr[q->f];
    }
    return val;
}
int main()
{
    struct queue q;
    q.size=4;
    q.r=0;
    q.f=0;
    q.arr=(int*)malloc(q.size* sizeof(int));
    enqueue(&q,12);
    enqueue(&q,1);
    enqueue(&q,2);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);

    if(isfull(&q))
    {
        printf("queue is overflow\n");
    }
    if(isempty(&q))
    {
        printf("queue is empty\n");
    }

    return 0;
}