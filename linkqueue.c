#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef  struct  node
     {    ElemType  data;
           struct node  *next;
     }qlink;
typedef struct
     {   qlink  *front;
          qlink  *rear;
     }linkqueue;
void initqueue(linkqueue  *LQ)
{
    LQ->front=LQ->rear=(qlink *) malloc(sizeof(qlink));
    if(!LQ->front)  exit (0);
    LQ->front->next=LQ->rear->next=NULL;
}
int emptyqueue (linkqueue  LQ)
{
   return(LQ.front->next==NULL&&LQ.rear->next==NULL);
}
void enqueue(linkqueue *LQ, ElemType  x)
{    qlink *p;
      p=(qlink * )malloc(sizeof(qlink));
      p->data=x;
      p->next=NULL;
     LQ->rear->next=p;
     LQ->rear=p;
}
int  dequeue ( linkqueue *LQ, ElemType *e)
  {   qlink *p;
       if( emptyqueue(*LQ)  )   return 0;
       p=LQ->front->next;
       *e=p->data;
       LQ->front->next=p->next;
       if( LQ->rear == p )
            LQ->rear=LQ->front;
       free(p);
       return 1;
    }
