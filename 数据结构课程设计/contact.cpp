#include <iostream>
#include <cstdio>
#include <string>
#include "contact.h"
#include "Linklist.h"
using namespace std;

void contact()
{
    int n;
    Linklist linklist;
    linklist.create();
    do {
        printf("\n");
        printf("****************ͨѶ¼����ϵͳ*****************\n");
        printf("* 1  �����ϵ��                               *\n");
        printf("* 2  ��ʾ��ϵ��                               *\n");
        printf("* 3  ɾ����ϵ��                               *\n");
        printf("* 4  ������ϵ��                               *\n");
        printf("* 5  �˳�                                    *\n");
        printf("*********************************************\n");
        printf("��ѡ��");
        cin >> n;
        string name, num;
        switch (n)
        {
        case 1:
            //printf("--------�����ϵ��-------");
            cout << "��������ϵ�˵�����: ";
            cin >> name;
            cout << "��������ϵ�˵��ֻ�����: ";
            cin >> num;
            linklist.insert( name,num);
            break;
        case 2:
            //printf("--------��ʾ��ϵ��-------"); 
            linklist.show(1);
            break;
        case 3:
            //printf("--------ɾ����ϵ��-------"); 
            cout << "��������ϵ�˵�����: ";
            cin >> name;
            linklist.remove(name,1);
            break;
        case 4:
            //printf("--------������ϵ��-------"); 
            cout << "��������ϵ�˵�����: ";
            cin >> name;
            linklist.find(name);
            break;
        case 5:break;
        default:
            printf("ERROR!"); break;
        }
    } while (n != 5);
}