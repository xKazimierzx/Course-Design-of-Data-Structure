#pragma once
#include <string>
#define N 105
using namespace std;

struct Node
{
	int l, r, father;
};

class Bitree
{
public:
	Node tr[N];
	Bitree();
	void add(int a, int b);
	void preorder(int u); //先序遍历
	void inorder(int u); //中序遍历
	void postorder(int u); //后序遍历
	int get_leaf(int u); //获取叶子节点数量
	int get_depth(int u); //获取深度
	int get_father(int u); //获取父节点
	int get_bro(int u); //获取兄弟节点
};