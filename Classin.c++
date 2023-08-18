#include<bits/stdc++.h>
using namespace std;

class Demo{
    string a = "Jay Ganesh";
    public:
    string get_string()
    {
        return a;
    }
    void display()
    {
        cout<<a<<endl;
    }

};
class Base{
    string B;
public:
//operator is built in function in C++
    void operator=(Demo obj)
    {
        B=obj.get_string();
    }
    void Display()
    {
        cout<<B<<endl;
    }
};



int main()
{
    
    Demo obj;
    Base obj1;
    obj1=obj;
    obj.display();
    obj1.Display();
    return 0;
}