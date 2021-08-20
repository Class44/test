#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
    double x1,x2,y2,y1,k,b;
    cout<<"第一个坐标";
    cin>>x1>>y1;
    cout<<"第二个坐标";
    cin>>x2>>y2;
    if (x1==x2)
    {
        cout<<"x="<<x1;
    }
    else
    {
        k=(y1-y2)/(x1-x2);
        b=(x1*y2-x2*y1)/(x1-x2);
        if (k==0)
        {
            if (b==0)
            {
                cout<<"y=0"<<endl;
            }
            else
            {
                cout<<"y="<<b<<endl;
            }
        }
        else if (k==1)
        {
            if (b==0)
            {
                cout<<"y=x"<<endl;
            }
            else
            {
                cout<<"y=x+"<<b<<endl;
            }
        }
        else
        {
            if (b==0)
            {
                cout<<"y="<<k<<"x"<<endl;
            }
            else
            {
                cout<<"y="<<k<<"x+"<<b<<endl;
            }
        }
    }
    system("PAUSE");

    }