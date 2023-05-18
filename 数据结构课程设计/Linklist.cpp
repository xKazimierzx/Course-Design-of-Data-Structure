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
	//ͷ�巨
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
			if (tmp == head && tmp->num == x) //��һ���ڵ�
			{
				head = head->next;
				length--;
				break;
			}
			else if (tmp != head && tmp->num == x) //�ǵ�һ���ڵ�
			{
				last->next = tmp->next;
				length--;
				break;
			}
		}
		else
		{
			if (tmp == head && tmp->name == x) //��һ���ڵ�
			{
				head = head->next;
				length--;
				break;
			}
			else if (tmp != head && tmp->name == x) //�ǵ�һ���ڵ�
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
			cout << "���ҽ������: \n";
			cout << "����: " << tmp->num<< endl;
			flag = true;
			break;
		}
		else if (tmp->name == x)
		{
			cout << "���ҽ������: \n";
			cout << "����: " << tmp->name << endl;
			cout << "�绰����: " << tmp->num << endl;
			flag = true;
			break;
		}
		tmp = tmp->next;
	}
	if(!flag) puts("����ʧ�ܣ�");
}

void Linklist::show(int type)
{
	LinklistNode *tmp = head;
	int t = length;
	while (t--)
	{
		if(type==0) cout << "����: " << tmp->num << endl;
		else
		{
			cout << "����: " << tmp->name << endl;
			cout << "����: " << tmp->num << endl;
			puts("");
		}
		tmp = tmp->next;
	}
	puts("");
}