#include "expression.h"
#include "Stack.h"
#include <iostream>
#include <cstdio>
#include <string>

void expression()
{
    int n;
    do {
        printf("\n");
        printf("****************���ʽ��ֵ*****************\n");
        printf("* 1  ������ʽ                           *\n");
        printf("* 2  �˳�                                *\n");
        printf("*****************************************\n");
        printf("��ѡ��");
        cin >> n;
        switch (n)
        {
        case 1:
            printf("--------������ʽ -------");
            break;
        case 2: break;
        default:
            printf("ERROR!"); break;
        }
    } while (n != 2);
}
