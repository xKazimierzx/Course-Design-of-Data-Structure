#include "Graph.h"
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;
#define N 105
#define M 310

typedef pair<int, int> PII;

__Graph::__Graph()
{
    cnt = idx = n = m = 0;
    memset(d, 0, sizeof d);
    memset(e, 0, sizeof e);
    memset(w, 0, sizeof w);
    memset(ne, 0, sizeof ne);
    memset(h, -1, sizeof h);
}

void __Graph::init()
{
    cnt = idx = n = m = 0;
    memset(d, 0, sizeof d);
    memset(e, 0, sizeof e);
    memset(w, 0, sizeof w);
    memset(ne, 0, sizeof ne);
    memset(h, -1, sizeof h);
}

void __Graph::add(int a, int b, int c)
{
    e[idx] = b; 
    w[idx] = c; 
    ne[idx] = h[a]; 
    h[a] = idx++;
    edge[cnt++] = { a,b,c };
    d[b]++;
}

void __Graph::spfa()
{
    int dis[N];
    bool st[N];
    memset(dis, 0x3f, sizeof dis);
    memset(st, 0, sizeof st);
    queue<int> q;
    dis[1] = 0;
    q.push(1);
    st[1] = true;

    while (q.size())
    {
        int t = q.front();
        q.pop();
        st[t] = false;

        for (int i = h[t]; ~i; i = ne[i])
        {
            int j = e[i];
            if (dis[j] > dis[t] + w[i])
            {
                dis[j] = dis[t] + w[i];
                if (!st[j])
                {
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }

    cout << dis[n] << endl;
}

void __Graph::dijkstra()
{
    int dis[N];
    bool st[N];
    memset(dis, 0x3f, sizeof dis);
    memset(st, 0, sizeof st);
    priority_queue<PII, vector<PII>, greater<PII>> q;
    dis[1] = 0;
    q.push({ 0,1 });

    while (q.size())
    {
        auto t = q.top().second;
        q.pop();

        if (st[t]) continue;
        st[t] = true;

        for (int i = h[t]; ~i; i = ne[i])
        {
            int j = e[i];
            if (dis[j] > dis[t] + w[i])
            {
                dis[j] = dis[t] + w[i];
                q.push({ dis[j],j });
            }
        }
    }

    cout << dis[n] << endl;
}

int p[N];
int find(int x) //并查集
{
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void __Graph::kruskal()
{
    int res = 0;
    for (int i = 1; i <= n; i++) p[i] = i; //并查集初始化
    sort(edge, edge + cnt);

    int s = 0;
    for (int i = 0; i < cnt; i++)
    {
        int a = edge[i].a, b = edge[i].b, c = edge[i].c;
        int pa = find(a), pb = find(b);

        if (pa != pb)
        {
            res += c;
            s++;
            p[pa] = pb;
        }
    }
    cout << res << endl;
}

void __Graph::topsort()
{
    vector<int> ans;
    queue<int> q;
    for (int i = 1; i <= n; i++)
        if (!d[i]) q.push(i);

    while (q.size())
    {
        int t = q.front();
        q.pop();
        ans.push_back(t);

        for (int i = h[t]; ~i; i = ne[i])
        {
            int j = e[i];
            if (--d[j] == 0) q.push(j);
        }
    }
    
    for (auto i : ans) cout << i << " ";
    puts("");
    puts("");
}

void __Graph::dfs(int u,int fa)
{
    cout << u << " ";
    for (int i = h[u]; ~i; i = ne[i])
    {
        int j = e[i];
        if (j == fa) continue;
        dfs(j,u);
    }
}

void __Graph::bfs(int u)
{
    bool st[N];
    memset(st, 0, sizeof st);
    queue<int> q;
    st[u] = true;
    q.push(u);

    while (q.size())
    {
        int now = q.front();
        q.pop();
        cout << now << " ";
        for (int i = h[now]; ~i; i = ne[i])
        {
            int j = e[i];
            if (st[j]) continue;
            q.push(j);
            st[j] = true;
        }
    }
}