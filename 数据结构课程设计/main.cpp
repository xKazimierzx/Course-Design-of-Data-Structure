//������־
//������Ŀ 2023-5-17 17:32
//������Ļ���������Ӧ����� 2023-5-17 20:30
//ջ����� 2023-5-17 20:56
//������ʽ����д���ܺ��� 2023-5-17 20:56
//���Ļ���������Ӧ����� 2023-5-18 08:28
//ͼ��ܹ���� 2023-5-18 09��00
//djkstra��� 2023-5-18 09��00
//spfa��� 2023-5-18 09��00
//ͼ�Ļ���������� 2023-5-18 16:45
//ͼ��Ӧ�ô���д 2023-5-18 16:45
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