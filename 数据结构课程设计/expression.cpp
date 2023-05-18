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
        printf("****************表达式求值*****************\n");
        printf("* 1  计算表达式                           *\n");
        printf("* 2  退出                                *\n");
        printf("*****************************************\n");
        printf("请选择：");
        cin >> n;
        switch (n)
        {
        case 1:
            printf("--------计算表达式 -------");
            break;
        case 2: break;
        default:
            printf("ERROR!"); break;
        }
    } while (n != 2);
}
