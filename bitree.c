#include <stdio.h>
#include <stdlib.h>
typedef char TElemtype;
typedef struct BiTNode
{
    TElemtype data;
    struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;
int CreateBiTree(BiTree *T)//����ݹ鴴��һ�ö�����
{
    char ch;
    scanf("%c",&ch);
    if(ch==' ') *T=NULL;
    else
    {
        if(!(*T=(BiTNode *)malloc (sizeof(BiTNode)))) exit(-2);
        (*T)->data=ch;
        CreateBiTree(&((*T)->lchild));
        CreateBiTree(&((*T)->rchild));
    }
    return 1;
}
void DestroyBiTree(BiTree *T)//���ٶ�����
{
    if(*T)
    {
        DestroyBiTree(&((*T)->lchild));
        DestroyBiTree(&((*T)->rchild));
        free(T);
        *T = NULL;
    }
}
int DepthOfBiTree( BiTree T)//���������
{
    int ldepth;
    int rdepth;

    if(T==NULL)
        return 0;
    ldepth = DepthOfBiTree(T->lchild);
    rdepth = DepthOfBiTree(T->rchild);

    return (ldepth>rdepth)?(ldepth+1):(rdepth+1);
}
int LeafCountOfBiTree(BiTree T)//������Ҷ�ӽڵ���
{
    if(T==NULL)
        return 0;
    if(T->lchild==NULL && T->rchild==NULL)
        return 1;
    return LeafCountOfBiTree(T->lchild) + LeafCountOfBiTree(T->rchild);
}
int PreOrderTraverse(BiTree T)//�������������
{
    if(T)
    {
        printf("%c",T->data);
        if(PreOrderTraverse(T->lchild))
            if(PreOrderTraverse(T->rchild)) return 1;
        return 0;
    }
    else
        return 1;
}
int InOrderTraverse(BiTree T)//�������������
{
    if(T)
    {
        if(InOrderTraverse(T->lchild))
        {
            printf("%c",T->data);
            if(InOrderTraverse(T->rchild))
                return 1;
        }

        return 0;
    }
    else
        return 1;
}
int PostOrderTraverse(BiTree T)//�������������
{
    if(T)
    {
        if(PostOrderTraverse(T->lchild))
        {
            if(PostOrderTraverse(T->rchild))
            {
                printf("%c",T->data);
                return 1;
            }
        }

        return 0;
    }
    else
        return 1;
}
