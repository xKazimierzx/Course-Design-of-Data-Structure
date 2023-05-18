//开发日志
//创建项目 2023-5-17 17:32
//单链表的基本操作及应用完成 2023-5-17 20:30
//---应用: 通讯录管理系统
//栈的基本操作及应用完成 2023-5-17 20:56
//---应用: 计算表达式待编写功能函数(待完善)
//树的基本操作及应用完成 2023-5-18 08:28
//---应用: huffman编码(待完善)
//图类架构完成 2023-5-18 09：00
//dijkstra算法完成 2023-5-18 09：00
//spfa算法完成 2023-5-18 09：00
//kruskal算法完成 2023-5-18 09：00
//图的基本操作完成 2023-5-18 16:45
//图的应用待编写 2023-5-18 16:45
//---1.应用: 最短路径(待完善)
//---2.应用: 最小生成树(待完善)
#include "io.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    do {
        ShowMainMenu();
        cout << "请选择：" << endl;
        cin >> n;
        switch (n)
        {
            case 1:LinkList(); break;
            case 2:Stack(); break;
            case 3:Array(); break;
            case 4:BiTree(); break;
            case 5:Graph(); break;
            case 6:break;
            default:puts("ERROR!"); break;
        }
    } while (n != 6);
    return 0;
}