#define INFINITY 9999999
#define MAX_VERTEX_NUM 100
#define ARCNUM 12
#define TRUE 1
#define FALSE 0
typedef struct VertexType
{
    char data;
} VertexType;
typedef struct ArcCell
{
    int adj;
} ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
typedef struct
{
    VertexType vexs[MAX_VERTEX_NUM];
    AdjMatrix arcs;
    int visited[MAX_VERTEX_NUM];
    int vexnum,arcnum;
} MGraph;
void CreateUDNGraph(MGraph *G,int vn,int an);
void DFSTraverse(MGraph *G, int i) ;
