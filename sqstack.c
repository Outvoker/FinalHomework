#include <stdio.h>
#include <stdlib.h>
#define INITSIZE  100
typedef int ElemType;
typedef struct
{
    int  top;
    ElemType   *base;
    int  stacksize;
} sqstack;
void initstack(sqstack *S)
{
    S->base=(ElemType *)malloc(INITSIZE*sizeof(ElemType));
    if(!S->base)    exit (-1);
    S->top=0;
    S->stacksize = INITSIZE;
}
int  gettop(sqstack S,ElemType *e)
{
    if ( S.top==0 )
    {
        printf("Stack is empty!\n");
        return 0;
    }
    *e= S.base[S.top-1];
    return 1;
}
int  push ( sqstack *S , ElemType x )
{
    if (S->top == S->stacksize)
    {
        S->base=
            (ElemType *)realloc(S->base,(S->stacksize+1)*sizeof(ElemType));
        if(!S->base) exit(-1);
        S->stacksize++;
    }
    S->base[S->top++] = x;
    return 1 ;
}
int pop(sqstack *S, ElemType *e)
{
    if(S->top==0)
    {
        printf("Stack is empty");
        return 0;
    }
    *e=S->base [-- S->top ] ;
    return 1;
}
int stackempty(sqstack S)
{
    if (S.top==0)
        return  1 ;
    else
        return  0 ;
}
