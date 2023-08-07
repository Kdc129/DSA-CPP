#include<bits/stdc++.h>

using namespace std;

int GCD(int A,int B)
{
    if(B==0)
       return A;
   return GCD(B,A%B);
}

int LCM(int m,int n)
{
   return (m*n)/GCD(m,n);
}


int main()
{
   cout<<"\n :: FInding LCM of two numbers ::\n";
   int m,n;
   cout<<"\nInput a first number :: ";
   cin>>m;
   cout<<"\nInput a second number :: ";
   cin>>n;
  
   cout<<"\n LCM of two number "<<m <<"and "<<n <<"are :: "<<LCM(m,n);
   cout<<"\n\n";
   return 0;
}

