//Linear Diophantine Equations

#include<bits/stdc++.h>

using namespace std;

int GCD(int x,int y)
{
     while(x!=y)
     {
        if(x>y)
        {
            x=x-y;
        }
        else{
            y=y-x;
        }
     }
    return x;  

}
void CheckDiophantine(int z,int res){
    if(z%res ==0 )
    {
        cout<<"\nPrint Possible";
    }
    else{
        cout<<"\nPrint Not Possible";
    }
}
int main()
{
    int a,b,c;
    cout<<"\nEnter first number ::";
    cin>>a;
    cout<<"Enter second number ::";
    cin>>b;
    cout<<"Enter third number ::";
    cin>>c;    
    cout<<"\n:;Given Diophantine equcation is ::\n";
    cout<<"ax+by=c"<<"::"<<a<<"x"<<"+"<<b<<"y"<<"="<<c;
    int r=GCD(a,b);
    CheckDiophantine(c,r);
    cout<<"\n\n";
    return 0;

}