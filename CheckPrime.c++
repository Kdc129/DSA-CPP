#include<bits/stdc++.h>

using namespace std;

bool CheckPrime(int Num)
{
   if(Num==1)  
      return false;
   for(int i=2;i*i<=Num;i++)
   {
         if(Num%i ==0)
         {
            return false;
         }
    }
    return true;
}
int main()
{
   int N=0;

   cout<<"\n::Check Number is Prime or Not Prime ::\n";

   cout<<"\nEnter a number ::";
   cin>>N;

   printf("%s", CheckPrime(N) ? "true" : "false");
   return 0;

}
