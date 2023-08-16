#include<bits/stdc++.h>
using namespace std;


void fun(vector<int> &v1)
{
     v1.push_back(56);
}

int main()
{
/* 
   int sum=0;
   if(vec.empty()!=true)
   {
        while(vec.size()!=0)
        {
           sum=sum+vec.back();
           vec.pop_back();
        }
   }   
   cout<<sum<<endl;
*/

 /*  vector <vector<int>> v2={{4,5,6,7},{7,8,9,4,3}};
   
   for(vector<int> vec : v2)
   {
      for(auto k :vec)
      {
         sum+=k;
      }
   }
   cout<<"sum of vector elements are ::"<<sum<<"\n";

   for(auto i=0;i<v2.size();i++)
   {
      for(auto j=0;j<v2[i].size();j++)
      {
         cout<<v2[i][j]<<" ";
      }
      cout<<"\n";
   }
   
*/
 
   vector<int> v1={5,6,7,8,2};
   fun(v1); 
   for(auto x :v1)
   {
      cout<<x<<" ";
   }
  
   return 0;
}