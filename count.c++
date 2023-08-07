#include<bits/stdc++.h>
using namespace std;

void CountDigit(int Num)
{
   int count=0;
   int No=Num;
   if(Num<0)
   {
      Num=-Num;
   }
   while(Num>0)
   {
       Num/=10;
       count++;
   }
   cout<<"Number of digit in number :"<< No<<" are "<< count;
}


int main()
{
   int No=0;
   cout<<"\n::Count Number of digits in number ::\n";
   cout<<"\nEnter a number ::";
   cin>>No;
   CountDigit(No);
   return 0;
}
