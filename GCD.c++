#include<bits/stdc++.h>

using namespace std;


int GCD(int N1,int N2)
{
    while(N1!=N2)
    {
        if(N1>N2)
           N1=N1-N2;
        else
           N2=N2-N1;
    }
    return N1;
}

int main()
{
    cout<<"\n Find GCD or HCF of two numbers \n";
    int A,B;
    cout<<"\nInput a first number :: ";
    cin>>A;
    cout<<"\nInput a second number :: ";
    cin>>B;
    int result=GCD(A,B);
    cout<<"\n GCD or HCF of given number "<<A<<" and "<<B<<" are ::" <<result;
    cout<<"\n\n";
}
