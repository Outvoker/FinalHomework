typedef int ElemType;
typedef  struct  node
     {    ElemType  data;
           struct node  *next;
     }qlink;
typedef struct
     {   qlink  *front;
          qlink  *rear;
     }linkqueue;
void initqueue(linkqueue  *LQ);
int emptyqueue (linkqueue  LQ);
void enqueue(linkqueue *LQ, ElemType  x);
int  dequeue ( linkqueue *LQ, ElemType *e);
