#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec={4,5,6,3,2,5,78};
    cout<<vec.size()<<"\n";
    cout<<"Maximum element in given vector :: "<<*max_element(vec.begin(),vec.end())<<"\n";
    cout<<"Minimum element in given vector :: "<<*min_element(vec.begin(),vec.end())<<"\n";
    cout<<vec.empty()<<"\n";
    cout<<"Second element in vector ::"<<vec[1]<<"\n";
    int arr[5];
    vector <vector<int>> v1={{4,5,6,7,6},{6,7,3,4},{9,8,7,53,45}};
    cout<<v1[1][3];
 
    return 0;
}