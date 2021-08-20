//
#include <iostream>
#include <cstdio>
#include "windows.h"
#include "cmath"
#include "vector"//动态数组
//定义可以用(#include"**")和(#include<**>)
//OK,各位，看这里
//下面是讨论区，别瞎聊
/*
 *
 *
 *
 *
 *
 *
 *
 * */
//有不够的自己换行
using namespace std;
int main()
{
    int i;
    vector<int> a(10,1) ;
    system("chcp 65001");//让程序支持中文,否则乱码
    system("cls");//清屏代码
    while(1)//必须有break函数，否则CLion报错
    {
        while(1)
        {
            i=1;
            cin>>a[i];
            i++;
            break;
        }
        break;
    }
    return 0;
}