
typedef int ElemType;
typedef struct
{
    int  top;
    ElemType   *base;
    int  stacksize;
} sqstack;
void initstack(sqstack *S);
int  gettop(sqstack S,ElemType *e);
int  push ( sqstack *S , ElemType x );
int pop(sqstack *S, ElemType *e);
int stackempty(sqstack S);
