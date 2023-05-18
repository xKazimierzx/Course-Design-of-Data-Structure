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

//��ʽǰ����(��̬�ڽӱ�)
class __Graph
{
private:
	int h[N];  //��ͷ
	int ne[M]; //nextָ������
	int e[M]; //Ԫ�ر��
	int w[M]; //Ȩֵ
	int d[N]; //ÿ���ڵ�����,������topsort
	int idx; //ģ��ָ��
	int cnt; //��ǰ�ߵ�����
public:
	int n, m; //�ڵ�����ͱߵĸ���
	int root; //���ڵ�
	Edge edge[M]; //���б�,��������С������
	__Graph();
	void init(); //��ʼ��
	void add(int a, int b, int c); //�ӱߺ���
	void spfa();  //spfa�㷨�����·(֧�ָ�Ȩ��)
	void dijkstra(); //dijkstfa�㷨�����·(��֧�ָ�Ȩ��)
	void kruskal(); //kruskal�㷨(����С������)
	void topsort(); //��������
	void dfs(int u,int fa); //������ȱ���
	void bfs(int u); //������ȱ���
};