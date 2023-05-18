#include "BiTree.h"
#include <iostream>
#include <queue>
using namespace std;

Bitree::Bitree()
{
    for (int i = 0; i < 105; i++) tr[i] = { -1,-1,-1 };
}

void Bitree::add(int a, int b)
{
    tr[b].father = a;
    if (tr[a].l == -1) tr[a].l = b;
    else tr[a].r = b;
}

void Bitree::preorder(int u)
{
    if (u == -1) return;
    cout << u << " ";
    preorder(tr[u].l);
    preorder(tr[u].r);
}

void Bitree::inorder(int u)
{
    if (u == -1) return;
    inorder(tr[u].l);
    cout << u << " ";
    inorder(tr[u].r);
}

void Bitree::postorder(int u)
{
    if (u == -1) return;
    postorder(tr[u].l);
    postorder(tr[u].r);
    cout << u << " ";
}

int Bitree::get_leaf(int u)
{
    int cnt = 0;
    queue<int> q;
    bool st[N] = { 0 };
    q.push(1);
    st[1] = true;
    while (q.size())
    {
        int now = q.front();
        q.pop();
        if (tr[now].l != -1) q.push(tr[now].l);
        if (tr[now].r != -1) q.push(tr[now].r);
        if ((tr[now].l == -1 && tr[now].r == -1) && !st[now]) cnt++, st[now] = true;
    }
    return cnt;
}

int Bitree::get_depth(int u)
{
    int cnt = 0;
    queue<int> q;
    int d[N] = { 0 };
    q.push(1);
    d[1] = 1;
    while (q.size())
    {
        int now = q.front();
        q.pop();
        if (tr[now].l != -1) q.push(tr[now].l), d[tr[now].l] = d[now] + 1;
        if (tr[now].r != -1) q.push(tr[now].r), d[tr[now].r] = d[now] + 1;
        cnt = max(cnt, d[now]);
    }
    return cnt;
}

int Bitree::get_father(int u)
{
    return tr[u].father;
}

int Bitree::get_bro(int u)
{
    int fa = tr[u].father;
    if (fa == -1) return -1;
    else if (tr[fa].l == u) return tr[fa].r;
    else if (tr[fa].r == u) return tr[fa].l;
}