#include<bits/stdc++.h>

using namespace std;

int Fact(int N)
{
    if(N==0)
    {
       return 1;
    }
    return (N*Fact(N-1));
}
int main()
{
    int No;
    cout<<"\n::Find Factors of number ::\n";
    cout<<"\nInput a number ::";
    cin>>No;
    cout<<"Factors of "<<No <<"are "<<Fact(No);
    cout<<"\n\n";
}
