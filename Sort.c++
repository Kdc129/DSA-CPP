#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> vec = {3,5,31,78,23,8,74};
    //Sorting vector in desending follow
    cout<<"\n::Sorting vector array in desending way ::\n";
    sort(vec.begin(),vec.end(),greater<int>());
    for(auto i:vec)
    {
        cout<<i<<"\t";
    }
    cout<<"\n";
    ////sorting array in asending form
    cout<<"\n::Sorting vector array in asending way ::\n";
     sort(vec.begin(),vec.end());
    for(auto i:vec)
    {
        cout<<i<<"\t";
    }
    cout<<"\n\n";
    vector <int> v1(vec.size());

    for(auto i=0;i<vec.size();i++)
    {
        for(auto j=0;j<vec.size();j++)
        {
            if(i!=j && vec[i]>vec[j])
            {
                  v1[i]=vec[j];
            }            
        }
    }
    for(auto  x : v1)
    {
        cout<<x<<"\t";
    }
    return 0;
}