#include <stdio.h>
#include <stdlib.h>
#include "include/sqstack.h"
#include "include/linkqueue.h"
#include "include/bitree.h"
#include "include/mgraph.h"

int main()
{
    int n;//≤‚ ‘’ª
    sqstack S;
    initstack(&S);
    push(&S,1);
    push(&S,2);
    push(&S,3);
    push(&S,4);
    pop(&S,&n);
    printf("%d",n);
    pop(&S,&n);
    printf("%d",n);
    pop(&S,&n);
    printf("%d",n);
    pop(&S,&n);
    printf("%d\n",n);

    linkqueue Q;//≤‚ ‘∂”¡–
    initqueue(&Q);
    enqueue(&Q,1);
    enqueue(&Q,2);
    enqueue(&Q,3);
    enqueue(&Q,4);
    dequeue(&Q,&n);
    printf("%d",n);
    dequeue(&Q,&n);
    printf("%d",n);
    dequeue(&Q,&n);
    printf("%d",n);
    dequeue(&Q,&n);
    printf("%d\n",n);

    BiTree T;//≤‚ ‘∂˛≤Ê ˜
    CreateBiTree(&T);
    PreOrderTraverse(T);
    putchar('\n');
    InOrderTraverse(T);
    putchar('\n');
    PostOrderTraverse(T);
    putchar('\n');
    getchar();

    MGraph G;//≤‚ ‘Õº
    CreateUDNGraph(&G,6,6);
    DFSTraverse(&G,0);
    return 0;
}

