#pragma once
#include <string>
#define N 105
#define M 310
using namespace std;

struct Edge
{
	int a, b, c;
	bool operator<(const Edge& other)const
	{
		return c < other.c;
	}
};

//链式前向星(静态邻接表)
class __Graph
{
private:
	int h[N];  //表头
	int ne[M]; //next指针数组
	int e[M]; //元素编号
	int w[M]; //权值
	int d[N]; //每个节点的入度,方便求topsort
	int idx; //模拟指针
	int cnt; //当前边的数量
public:
	int n, m; //节点个数和边的个数
	int root; //根节点
	Edge edge[M]; //所有边,方便求最小生成树
	__Graph();
	void init(); //初始化
	void add(int a, int b, int c); //加边函数
	void spfa();  //spfa算法求最短路(支持负权边)
	void dijkstra(); //dijkstfa算法求最短路(不支持负权边)
	void kruskal(); //kruskal算法(求最小生成树)
	void topsort(); //拓扑排序
	void dfs(int u,int fa); //深度优先遍历
	void bfs(int u); //宽度优先遍历
};