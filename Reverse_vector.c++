#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1={4,5,32,53,12,78,453,12};
    cout<<"\n::Original vector is ::\n";
    for(auto j:v1)
    {
        cout<<j<<"\t";
    }
    cout<<"\nReverse vector using while-loop ::\n";
    while(v1.size() >0)
    {
        cout<<v1.back()<<"\t";
        v1.pop_back();
    }
    v1={4,5,32,53,12,78,453,12};
    cout<<"\nReverse vector using reverse function ::\n";
    reverse(v1.begin(),v1.end());
    for(auto x :v1)
    {
        cout<<x<<"\t";
    }
    cout<<endl;
    return 0;
}