#include <cstdio>
#include <iostream>
#include "io.h"
#include "Linklist.h"
#include "Stack.h"
#include "BiTree.h"
#include "app.h"
#include "Graph.h"
using namespace std;

void ShowMainMenu()
{
    printf("\n");
    printf("*******************算法与数据结构******************\n");
    printf("* 1  单链表的基本操作及应用                       *\n");
    printf("* 2  栈的基本操作及应用                           *\n");
    printf("* 3  数组的基本操作及应用                         *\n");
    printf("* 4  树的基本操作及应用                           *\n");
    printf("* 5  图的基本操作及应用                           *\n");
    printf("* 6  退出                                         *\n");
    printf("***************************************************\n");
}

void LinkList()
{
    int n;
    do {
        printf("\n\n");
        printf("**************单链表的基本操作及应用***************\n");
        printf("* 1  创建                                         *\n");
        printf("* 2  插入                                         *\n");
        printf("* 3  删除                                         *\n");
        printf("* 4  查找                                         *\n");
        printf("* 5  显示                                         *\n");
        printf("* 6  通讯录（应用）                               *\n");
        printf("* 7  退出                                         *\n");
        printf("***************************************************\n");
        printf("请选择：");
        scanf("%d", &n);
        string x;
        switch (n)
        {
            case 1:
                Linklist linklist;
                linklist.create();
                puts("创建成功!");
                break;
            case 2:
                cout << "请输入要插入的元素值: ";
                cin >> x;
                linklist.insert("", x);
                puts("插入成功!");
                break;
            case 3:
                //printf("--------删除元素-------"); 
                cout << "请输入要删除的元素值: ";
                cin >> x;
                if (!linklist.length) puts("删除失败，链表为空！");
                else linklist.remove(x,0), puts("删除成功！");
                break;
            case 4:
                //printf("--------查找元素-------"); 
                cout << "请输入要查找的元素值: ";
                cin >> x;
                linklist.find(x);
                break;
            case 5:
                //printf("--------显示链表-------"); 
                linklist.show(0);
                break;
            case 6:
                //printf("--------通讯录---------");
                contact();
                break;
            case 7: break;
            default:
                printf("ERROR!"); break;
        }
    } while (n != 7);
}

void Stack()
{
    int n;
    __Stack<string> stack;
    do {
        printf("\n");
        printf("****************栈的基本操作及应用*****************\n");
        printf("* 1  进栈                                         *\n");
        printf("* 2  出栈                                         *\n");
        printf("* 3  取栈顶元素                                   *\n");
        printf("* 4  表达式求解（应用）                           *\n");
        printf("* 5  退出                                         *\n");
        printf("***************************************************\n");
        printf("请选择：");
        scanf("%d", &n);
        string x;
        switch (n)
        {
            case 1:
                //printf("--------进栈-------"); 
                cout << "请输入元素的值: ";
                cin >> x;
                stack.push(x);
                break;
            case 2:
                //printf("--------出栈-------"); 
                if (!stack.size()) puts("栈为空，出栈失败!");
                else
                {
                    stack.pop();
                    puts("出栈成功!");
                }
                break;
            case 3:
                //printf("--------取栈顶元素-------"); 
                if (!stack.size()) puts("栈为空!");
                else cout << "栈顶元素为： " << stack.Top() << endl;
                break;
            case 4:
                //printf("--------表达式求值-------"); 
                expression();
                break;
            case 5:break;
            default:
                printf("ERROR!"); break;
        }
    } while (n != 5);
}


void Array()
{
    int n;
    do {
        printf("\n");
        printf("*************稀疏矩阵的压缩存储及应用**************\n");
        printf("* 1  创建                                         *\n");
        printf("* 2  显示                                         *\n");
        printf("* 3  矩阵乘法（应用）                             *\n");
        printf("* 4  退出                                         *\n");
        printf("***************************************************\n");
        printf("请选择：");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("---------创建-------"); break;
        case 2:
            printf("---------显示-------"); break;
        case 3:
            printf("---------矩阵乘法-------"); break;
        case 4:break;
        default:
            printf("ERROR!"); break;
        }
    } while (n != 4);
}

void BiTree()
{
    int n,m;
    Bitree bitree;
    do
    {
        printf("\n");
        printf("**************二叉树的基本操作及应用***************\n");
        printf("* 1  创建二叉树                                   *\n");
        printf("* 2  遍历二叉树（先/中/后）                       *\n");
        printf("* 3  计算树的深度                                 *\n");
        printf("* 4  计算叶子结点个数                             *\n");
        printf("* 5  查找双亲                                     *\n");
        printf("* 6  查找兄弟                                     *\n");
        printf("* 7  Huffman编码（应用）                          *\n");
        printf("* 8  退出\n");
        printf("***************************************************\n");
        printf("请选择：");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            //printf("---------创建二叉树--------");
            cout << "请输入节点数量： ";
            cin >> m;
            for (int i = 0; i < m - 1; i++)
            {
                int a, b;
                cout << "请输入一条边(a->b)： ";
                cin >> a >> b;
                if (a > b) swap(a, b);
                bitree.add(a, b);
            }
            puts("二叉树创建完成！");
            break;
        case 2:
            //printf("---------*遍历二叉树-------");
            cout << "先序遍历： ";
            bitree.preorder(1); //数据保证1为根节点
            puts("");

            cout << "中序遍历： ";
            bitree.inorder(1); //数据保证1为根节点
            puts("");

            cout << "后序遍历： ";
            bitree.postorder(1); //数据保证1为根节点
            puts("");
            puts("");
            break;
        case 3:
            //printf("---------计算树的深度------"); 
            cout << "树的深度为： " << bitree.get_depth(1) << endl;
            puts("");
            break;
        case 4:
            //printf("---------计算叶子结点个数-------"); 
            cout << "叶子结点个数为： " << bitree.get_leaf(1) << endl;
            puts("");
            break;
        case 5:
            //printf("---------查找双亲-------"); 
            for (int i = 1; i <= m; i++)
                printf("%d号节点的父节点为：%d\n", i, bitree.get_father(i));
            puts("");
            break;
        case 6:
            //printf("---------查找兄弟-------"); 
            for (int i = 1; i <= m; i++)
                printf("%d号节点的兄弟节点为：%d\n", i, bitree.get_bro(i));
            puts("");
            break;
        case 7:
            printf("---------Huffman编码-------"); 
            break;
        case 8:break;
        default:
            printf("ERROR!"); break;
        }
    } while (n != 8);
}

void Graph()
{
    __Graph graph;
    int k;
    int n, m,root;
    do {
        printf("\n");
        printf("****************图的基本操作及应用*****************\n");
        printf("* 1  创建无向图                                    *\n");
        printf("* 2  创建无向网                                    *\n");
        printf("* 3  创建有向图                                    *\n");
        printf("* 4  创建有向网                                    *\n");
        printf("* 5  遍历                                          *\n");
        printf("* 6  拓扑排序                                      *\n");
        printf("* 7  最小生成树（应用）                            *\n");
        printf("* 8  最短路径（应用）                              *\n");
        printf("* 9  关键路径（应用）                              *\n");
        printf("* 10 退出                                          *\n");
        printf("***************************************************\n");
        printf("请选择：");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            //printf("---------创建无向图-------"); 
            graph.init();
            cout << "请输入节点个数和边的个数(n,m): ";
            cin >> n >> m;
            cout << "请输入根节点编号: ";
            cin >> root;
            graph.n = n, graph.m = m, graph.root = root;
            while (m--)
            {
                int a, b;
                cout << "请输入一条边(a->b): ";
                cin >> a >> b;
                graph.add(a, b, 0);
                graph.add(b, a, 0);
            }
            break;
        case 2:
            //printf("---------创建无向网-------"); 
            graph.init();
            cout << "请输入节点个数和边的个数(n,m): ";
            cin >> n >> m;
            cout << "请输入根节点编号: ";
            cin >> root;
            graph.n = n, graph.m = m,graph.root = root;
            while (m--)
            {
                int a, b, c;
                cout << "请输入一条边(a->b,边权为c): ";
                cin >> a >> b >> c;
                graph.add(a, b, c);
                graph.add(b, a, c);
            }
            break;
        case 3:
            //printf("---------创建有向图-------"); 
            graph.init();
            cout << "请输入节点个数和边的个数(n,m): ";
            cin >> n >> m;
            cout << "请输入根节点编号: ";
            cin >> root;
            graph.n = n, graph.m = m, graph.root = root;
            while (m--)
            {
                int a, b;
                cout << "请输入一条边(a->b): ";
                cin >> a >> b;
                graph.add(a, b, 0);
            }
            break;
        case 4:
            //printf("---------创建有向网-------"); 
            graph.init();
            cout << "请输入节点个数和边的个数(n,m): ";
            cin >> n >> m;
            cout << "请输入根节点编号: ";
            cin >> root;
            graph.n = n, graph.m = m, graph.root = root;
            while (m--)
            {
                int a, b, c;
                cout << "请输入一条边(a->b,边权为c): ";
                cin >> a >> b >> c;
                graph.add(a, b, c);
            }
            break;
        case 5:
            //printf("---------遍历-------");
            cout << "dfs(深度优先遍历)结果为: ";
            graph.dfs(root,-1);
            puts("");
            cout << "bfs(广度优先遍历)结果为: ";
            graph.bfs(root);
            puts("");
            puts("");
            break;
        case 6:
            //printf("---------拓扑排序-------");
            cout << "topsort(拓扑排序)结果为: ";
            graph.topsort();
            break;
        case 7:
            //printf("---------最小生成树-------"); 
            cout << "该图的最小生成树长度为: ";
            graph.kruskal();
            puts("");
            break;
        case 8:
            //printf("---------最短路径-------"); 
            cout << "该图的最短路径长度为: ";
            graph.spfa();
            puts("");
            break;
        case 9:
            printf("---------关键路径-------"); break;
        case 10:break;
        default:
            printf("ERROR!"); break;
        }
    } while (k != 10);
}