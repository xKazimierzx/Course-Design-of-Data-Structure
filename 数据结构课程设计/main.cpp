//������־
//������Ŀ 2023-5-17 17:32
//������Ļ���������Ӧ����� 2023-5-17 20:30
//---Ӧ��: ͨѶ¼����ϵͳ
//ջ�Ļ���������Ӧ����� 2023-5-17 20:56
//---Ӧ��: ������ʽ����д���ܺ���(������)
//���Ļ���������Ӧ����� 2023-5-18 08:28
//---Ӧ��: huffman����(������)
//ͼ��ܹ���� 2023-5-18 09��00
//dijkstra�㷨��� 2023-5-18 09��00
//spfa�㷨��� 2023-5-18 09��00
//kruskal�㷨��� 2023-5-18 09��00
//ͼ�Ļ���������� 2023-5-18 16:45
//ͼ��Ӧ�ô���д 2023-5-18 16:45
//---1.Ӧ��: ���·��(������)
//---2.Ӧ��: ��С������(������)
#include "io.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    do {
        ShowMainMenu();
        cout << "��ѡ��" << endl;
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