#include<bits/stdc++.h>

using namespace std;

class demo{
    public:
    demo()
    {
        cout<<"\nInside Default constructor";
    }
    demo(int a,int b)
    {
        cout<<"\nInside Parameterise constructor"<<a+b;
    }
    demo(demo &obj)
    {
        cout<<"\nInside copy constructor";
    }
    public:
    void fun()
    {
        cout<<"\nFun function:";
    }
    ~demo()
    {
        cout<<"\nInside destructor";
    }
};


int main()
{
    demo obj;
    demo obj1(56,76);
    demo obj2(obj1);
    obj.fun();
    obj1.fun();
    cout<<"\n";
    return 0;
}