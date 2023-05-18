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
	cout << "请输入矩阵的尺寸(n*m): ";
	cin >> n >> m;
	puts("请输入该矩阵: ");
	for(int i=0;i<n;i++)
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			if (x) a[cnt++] = { i,j,x };
		}
	puts("创建成功!");
}

Array Array::matrix(Array other)
{

	return Array();
}
