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
	void preorder(int u); //�������
	void inorder(int u); //�������
	void postorder(int u); //�������
	int get_leaf(int u); //��ȡҶ�ӽڵ�����
	int get_depth(int u); //��ȡ���
	int get_father(int u); //��ȡ���ڵ�
	int get_bro(int u); //��ȡ�ֵܽڵ�
};