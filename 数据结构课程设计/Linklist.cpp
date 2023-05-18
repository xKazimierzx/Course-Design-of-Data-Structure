#include "Linklist.h"
#include <iostream>
#include <string>
using namespace std;

void Linklist::create()
{
	length = 0;
	head = NULL;
}

void Linklist::insert(string name="", string num="")
{
	LinklistNode* node = new(LinklistNode);
	node->name = name;
	node->num = num;
	//头插法
	node->next = head;
	head = node;
	length++;
}

void Linklist::remove(string x,int type)
{
	LinklistNode* tmp = head,*last = NULL;
	while (tmp!=NULL)
	{
		if (!type)
		{
			if (tmp == head && tmp->num == x) //第一个节点
			{
				head = head->next;
				length--;
				break;
			}
			else if (tmp != head && tmp->num == x) //非第一个节点
			{
				last->next = tmp->next;
				length--;
				break;
			}
		}
		else
		{
			if (tmp == head && tmp->name == x) //第一个节点
			{
				head = head->next;
				length--;
				break;
			}
			else if (tmp != head && tmp->name == x) //非第一个节点
			{
				last->next = tmp->next;
				length--;
				break;
			}
		}
		last = tmp;
		tmp = tmp->next;
	}
}

void Linklist::find(string x)
{
	LinklistNode* tmp = head;
	bool flag = false;
	while (tmp != NULL)
	{
		if (tmp->num == x)
		{
			cout << "查找结果如下: \n";
			cout << "数据: " << tmp->num<< endl;
			flag = true;
			break;
		}
		else if (tmp->name == x)
		{
			cout << "查找结果如下: \n";
			cout << "姓名: " << tmp->name << endl;
			cout << "电话号码: " << tmp->num << endl;
			flag = true;
			break;
		}
		tmp = tmp->next;
	}
	if(!flag) puts("查找失败！");
}

void Linklist::show(int type)
{
	LinklistNode *tmp = head;
	int t = length;
	while (t--)
	{
		if(type==0) cout << "数据: " << tmp->num << endl;
		else
		{
			cout << "姓名: " << tmp->name << endl;
			cout << "号码: " << tmp->num << endl;
			puts("");
		}
		tmp = tmp->next;
	}
	puts("");
}