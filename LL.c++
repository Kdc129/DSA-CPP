//Addition of 2^64 integer value
// CPP Program to demonstrate Big Integer data type

#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost:: multiprecision;
using namespace std;


int128_t Addition(long long A,long long B)
{
    return (int128_t)A*B;
}

int main()
{
    long long No=98745636214564698;
    long long No1=7459874565236544789;
    
    cout<<Addition(No,No1)<<"\n";
    return 0;
}