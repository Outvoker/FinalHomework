#include <stdio.h>
#include <stdlib.h>
#define INFINITY 9999999
#define MAX_VERTEX_NUM 100
#define ARCNUM 12
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
void CreateUDNGraph(MGraph *G,int vn,int an)
{
    int i,j;
    G->vexnum=vn;
    G->arcnum=an;
    for(i=0;i<G->vexnum;i++)
        G->visited[i]=0;
    for(i=0;i<G->vexnum;i++)
    {
        scanf("%c",&((G->vexs[i]).data));
    }
    for(i=0; i<G->vexnum; i++)
    {
        for(j=0; j<G->vexnum; j++)
        {
            scanf("%d",&(G->arcs[i][j].adj));
        }
    }
    return;
}
void DFSTraverse(MGraph *G, int i)  //深度优先搜索
{
	printf("%c ", G->vexs[i].data);
	G->visited[i] = 1;
	int j;
	for (j = 0; j < G->vexnum; j++)
	{
		if (G->arcs[i][j].adj!=0 && G->visited[j]==0)
			DFSTraverse(G, j);
	}
}
