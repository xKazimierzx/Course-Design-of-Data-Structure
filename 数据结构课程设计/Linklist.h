#pragma once
#include <string>
using namespace std;

struct LinklistNode
{
	int type;
	string name, num;
	LinklistNode* next;
};

class Linklist
{
public:
	int length;
	LinklistNode* head;
	void create();
	void insert(string name, string num);  //ͷ�巨
	void remove(string x,int type);
	void find(string x);
	void show(int type);
};