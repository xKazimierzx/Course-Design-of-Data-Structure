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
    printf("*******************�㷨�����ݽṹ******************\n");
    printf("* 1  ������Ļ���������Ӧ��                       *\n");
    printf("* 2  ջ�Ļ���������Ӧ��                           *\n");
    printf("* 3  ����Ļ���������Ӧ��                         *\n");
    printf("* 4  ���Ļ���������Ӧ��                           *\n");
    printf("* 5  ͼ�Ļ���������Ӧ��                           *\n");
    printf("* 6  �˳�                                         *\n");
    printf("***************************************************\n");
}

void LinkList()
{
    int n;
    do {
        printf("\n\n");
        printf("**************������Ļ���������Ӧ��***************\n");
        printf("* 1  ����                                         *\n");
        printf("* 2  ����                                         *\n");
        printf("* 3  ɾ��                                         *\n");
        printf("* 4  ����                                         *\n");
        printf("* 5  ��ʾ                                         *\n");
        printf("* 6  ͨѶ¼��Ӧ�ã�                               *\n");
        printf("* 7  �˳�                                         *\n");
        printf("***************************************************\n");
        printf("��ѡ��");
        scanf("%d", &n);
        string x;
        switch (n)
        {
            case 1:
                Linklist linklist;
                linklist.create();
                puts("�����ɹ�!");
                break;
            case 2:
                cout << "������Ҫ�����Ԫ��ֵ: ";
                cin >> x;
                linklist.insert("", x);
                puts("����ɹ�!");
                break;
            case 3:
                //printf("--------ɾ��Ԫ��-------"); 
                cout << "������Ҫɾ����Ԫ��ֵ: ";
                cin >> x;
                if (!linklist.length) puts("ɾ��ʧ�ܣ�����Ϊ�գ�");
                else linklist.remove(x,0), puts("ɾ���ɹ���");
                break;
            case 4:
                //printf("--------����Ԫ��-------"); 
                cout << "������Ҫ���ҵ�Ԫ��ֵ: ";
                cin >> x;
                linklist.find(x);
                break;
            case 5:
                //printf("--------��ʾ����-------"); 
                linklist.show(0);
                break;
            case 6:
                //printf("--------ͨѶ¼---------");
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
        printf("****************ջ�Ļ���������Ӧ��*****************\n");
        printf("* 1  ��ջ                                         *\n");
        printf("* 2  ��ջ                                         *\n");
        printf("* 3  ȡջ��Ԫ��                                   *\n");
        printf("* 4  ���ʽ��⣨Ӧ�ã�                           *\n");
        printf("* 5  �˳�                                         *\n");
        printf("***************************************************\n");
        printf("��ѡ��");
        scanf("%d", &n);
        string x;
        switch (n)
        {
            case 1:
                //printf("--------��ջ-------"); 
                cout << "������Ԫ�ص�ֵ: ";
                cin >> x;
                stack.push(x);
                break;
            case 2:
                //printf("--------��ջ-------"); 
                if (!stack.size()) puts("ջΪ�գ���ջʧ��!");
                else
                {
                    stack.pop();
                    puts("��ջ�ɹ�!");
                }
                break;
            case 3:
                //printf("--------ȡջ��Ԫ��-------"); 
                if (!stack.size()) puts("ջΪ��!");
                else cout << "ջ��Ԫ��Ϊ�� " << stack.Top() << endl;
                break;
            case 4:
                //printf("--------���ʽ��ֵ-------"); 
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
        printf("*************ϡ������ѹ���洢��Ӧ��**************\n");
        printf("* 1  ����                                         *\n");
        printf("* 2  ��ʾ                                         *\n");
        printf("* 3  ����˷���Ӧ�ã�                             *\n");
        printf("* 4  �˳�                                         *\n");
        printf("***************************************************\n");
        printf("��ѡ��");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("---------����-------"); break;
        case 2:
            printf("---------��ʾ-------"); break;
        case 3:
            printf("---------����˷�-------"); break;
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
        printf("**************�������Ļ���������Ӧ��***************\n");
        printf("* 1  ����������                                   *\n");
        printf("* 2  ��������������/��/��                       *\n");
        printf("* 3  �����������                                 *\n");
        printf("* 4  ����Ҷ�ӽ�����                             *\n");
        printf("* 5  ����˫��                                     *\n");
        printf("* 6  �����ֵ�                                     *\n");
        printf("* 7  Huffman���루Ӧ�ã�                          *\n");
        printf("* 8  �˳�\n");
        printf("***************************************************\n");
        printf("��ѡ��");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            //printf("---------����������--------");
            cout << "������ڵ������� ";
            cin >> m;
            for (int i = 0; i < m - 1; i++)
            {
                int a, b;
                cout << "������һ����(a->b)�� ";
                cin >> a >> b;
                if (a > b) swap(a, b);
                bitree.add(a, b);
            }
            puts("������������ɣ�");
            break;
        case 2:
            //printf("---------*����������-------");
            cout << "��������� ";
            bitree.preorder(1); //���ݱ�֤1Ϊ���ڵ�
            puts("");

            cout << "��������� ";
            bitree.inorder(1); //���ݱ�֤1Ϊ���ڵ�
            puts("");

            cout << "��������� ";
            bitree.postorder(1); //���ݱ�֤1Ϊ���ڵ�
            puts("");
            puts("");
            break;
        case 3:
            //printf("---------�����������------"); 
            cout << "�������Ϊ�� " << bitree.get_depth(1) << endl;
            puts("");
            break;
        case 4:
            //printf("---------����Ҷ�ӽ�����-------"); 
            cout << "Ҷ�ӽ�����Ϊ�� " << bitree.get_leaf(1) << endl;
            puts("");
            break;
        case 5:
            //printf("---------����˫��-------"); 
            for (int i = 1; i <= m; i++)
                printf("%d�Žڵ�ĸ��ڵ�Ϊ��%d\n", i, bitree.get_father(i));
            puts("");
            break;
        case 6:
            //printf("---------�����ֵ�-------"); 
            for (int i = 1; i <= m; i++)
                printf("%d�Žڵ���ֵܽڵ�Ϊ��%d\n", i, bitree.get_bro(i));
            puts("");
            break;
        case 7:
            printf("---------Huffman����-------"); 
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
        printf("****************ͼ�Ļ���������Ӧ��*****************\n");
        printf("* 1  ��������ͼ                                    *\n");
        printf("* 2  ����������                                    *\n");
        printf("* 3  ��������ͼ                                    *\n");
        printf("* 4  ����������                                    *\n");
        printf("* 5  ����                                          *\n");
        printf("* 6  ��������                                      *\n");
        printf("* 7  ��С��������Ӧ�ã�                            *\n");
        printf("* 8  ���·����Ӧ�ã�                              *\n");
        printf("* 9  �ؼ�·����Ӧ�ã�                              *\n");
        printf("* 10 �˳�                                          *\n");
        printf("***************************************************\n");
        printf("��ѡ��");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            //printf("---------��������ͼ-------"); 
            graph.init();
            cout << "������ڵ�����ͱߵĸ���(n,m): ";
            cin >> n >> m;
            cout << "��������ڵ���: ";
            cin >> root;
            graph.n = n, graph.m = m, graph.root = root;
            while (m--)
            {
                int a, b;
                cout << "������һ����(a->b): ";
                cin >> a >> b;
                graph.add(a, b, 0);
                graph.add(b, a, 0);
            }
            break;
        case 2:
            //printf("---------����������-------"); 
            graph.init();
            cout << "������ڵ�����ͱߵĸ���(n,m): ";
            cin >> n >> m;
            cout << "��������ڵ���: ";
            cin >> root;
            graph.n = n, graph.m = m,graph.root = root;
            while (m--)
            {
                int a, b, c;
                cout << "������һ����(a->b,��ȨΪc): ";
                cin >> a >> b >> c;
                graph.add(a, b, c);
                graph.add(b, a, c);
            }
            break;
        case 3:
            //printf("---------��������ͼ-------"); 
            graph.init();
            cout << "������ڵ�����ͱߵĸ���(n,m): ";
            cin >> n >> m;
            cout << "��������ڵ���: ";
            cin >> root;
            graph.n = n, graph.m = m, graph.root = root;
            while (m--)
            {
                int a, b;
                cout << "������һ����(a->b): ";
                cin >> a >> b;
                graph.add(a, b, 0);
            }
            break;
        case 4:
            //printf("---------����������-------"); 
            graph.init();
            cout << "������ڵ�����ͱߵĸ���(n,m): ";
            cin >> n >> m;
            cout << "��������ڵ���: ";
            cin >> root;
            graph.n = n, graph.m = m, graph.root = root;
            while (m--)
            {
                int a, b, c;
                cout << "������һ����(a->b,��ȨΪc): ";
                cin >> a >> b >> c;
                graph.add(a, b, c);
            }
            break;
        case 5:
            //printf("---------����-------");
            cout << "dfs(������ȱ���)���Ϊ: ";
            graph.dfs(root,-1);
            puts("");
            cout << "bfs(������ȱ���)���Ϊ: ";
            graph.bfs(root);
            puts("");
            puts("");
            break;
        case 6:
            //printf("---------��������-------");
            cout << "topsort(��������)���Ϊ: ";
            graph.topsort();
            break;
        case 7:
            //printf("---------��С������-------"); 
            cout << "��ͼ����С����������Ϊ: ";
            graph.kruskal();
            puts("");
            break;
        case 8:
            //printf("---------���·��-------"); 
            cout << "��ͼ�����·������Ϊ: ";
            graph.spfa();
            puts("");
            break;
        case 9:
            printf("---------�ؼ�·��-------"); break;
        case 10:break;
        default:
            printf("ERROR!"); break;
        }
    } while (k != 10);
}