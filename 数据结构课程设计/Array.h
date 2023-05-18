#pragma once
#define N 105
using namespace std;

struct Node
{
	int x;
	int y;
	int val;
};

class Array
{
public:
	int n;
	int m;
	int cnt;
	Node a[N];
	void show();
	void create();
	Array matrix(Array other);
};