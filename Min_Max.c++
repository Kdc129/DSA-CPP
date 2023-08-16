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
    
    cout<<"\nMinimum element in vector is ::"<<*min_element(v1.begin(),v1.end());
    cout<<"\nMaximum element in vector is ::"<<*max_element(v1.begin(),v1.end());
    
    cout<<endl;
    return 0;
}