#include "iostream"
#include "vector"
#include "windows.h"
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    int x;
    cout<<"输入定义的数的量";
    cin>>x;
    vector<int>a(x);
    for (int i = 1; i <= x; ++i)
    {
        cin>>a[i];
    }
    cout<<"这组数有"<<a.size()<<"个"<<endl;
    for (int b = 1; b <= x; ++b)
    {
        cout<<"这组数的第"<<b<<"个是";
        cout<< a[b]<<endl;
    }
    return 0;
}