#include<bits/stdc++.h>

using namespace std;

int TrailingZeros(int Num)
{
    int r=0;
    for(int i=5;i<=Num;i=i*5)
    {
       r=r+(Num/i);
    }
    return r;
}


int main()
{
   int No=0;
   cout<<"\n::Trailing Zeros in Factorial::\n";
   cout<<"\nInput a number :: ";
   cin>>No;
   int result=TrailingZeros(No);
   cout<<"\nTrailing zeros in "<< No<<" are "<<result;
    cout<<"\n";
    return 0;
}
