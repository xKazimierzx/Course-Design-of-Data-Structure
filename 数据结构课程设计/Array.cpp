#include "Array.h"
#include <iostream>
#define N 105
using namespace std;

void Array::show()
{
	int t[N][N];
	memset(t, 0, sizeof t);
	for (int i = 0; i < cnt; i++) t[a[i].x][a[i].y] = a[i].val;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) cout << t[i][j] << " ";
		puts("");
	}
}

void Array::create()
{
	cout << "���������ĳߴ�(n*m): ";
	cin >> n >> m;
	puts("������þ���: ");
	for(int i=0;i<n;i++)
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			if (x) a[cnt++] = { i,j,x };
		}
	puts("�����ɹ�!");
}

Array Array::matrix(Array other)
{

	return Array();
}
