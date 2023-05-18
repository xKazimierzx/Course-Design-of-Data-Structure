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
        printf("****************通讯录管理系统*****************\n");
        printf("* 1  添加联系人                               *\n");
        printf("* 2  显示联系人                               *\n");
        printf("* 3  删除联系人                               *\n");
        printf("* 4  查找联系人                               *\n");
        printf("* 5  退出                                    *\n");
        printf("*********************************************\n");
        printf("请选择：");
        cin >> n;
        string name, num;
        switch (n)
        {
        case 1:
            //printf("--------添加联系人-------");
            cout << "请输入联系人的姓名: ";
            cin >> name;
            cout << "请输入联系人的手机号码: ";
            cin >> num;
            linklist.insert( name,num);
            break;
        case 2:
            //printf("--------显示联系人-------"); 
            linklist.show(1);
            break;
        case 3:
            //printf("--------删除联系人-------"); 
            cout << "请输入联系人的姓名: ";
            cin >> name;
            linklist.remove(name,1);
            break;
        case 4:
            //printf("--------查找联系人-------"); 
            cout << "请输入联系人的姓名: ";
            cin >> name;
            linklist.find(name);
            break;
        case 5:break;
        default:
            printf("ERROR!"); break;
        }
    } while (n != 5);
}