typedef char TElemtype;
typedef struct BiTNode
{
    TElemtype data;
    struct BiTNode *lchild,*rchild;
} BiTNode,*BiTree;
int CreateBiTree(BiTree *T);
void DestroyBiTree(BiTree *T);
int DepthOfBiTree( BiTree T);
int LeafCountOfBiTree(BiTree T);
int PreOrderTraverse(BiTree T);
int InOrderTraverse(BiTree T);
int PostOrderTraverse(BiTree T);
