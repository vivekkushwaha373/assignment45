#include<bits/stdc++.h>
using namespace std;
checkmultiset(multiset<int>s,multiset<int>x)
{
int count=0,k=0;
if(s.size()==x.size())
{
    for(auto i=s.begin();i!=s.end();i++)
    {
        for(auto j=x.begin();j!=x.end();j++)
        {
            if(*i==*j)
            count++;
        }
        if(count==1)
        {
            count=0;
            k++;
        }
        
    }
}
if(k==s.size())
return true;
else
return false;
}
int main()
{
   multiset<int>s;
   s.insert(1);
   s.insert(4);
   s.insert(5);
   s.insert(9);
   multiset<int>x;
   x.insert(1);
   x.insert(4);
   x.insert(5);
   x.insert(9);
  bool a=checkmultiset(s,x);
  a==1?printf("equal multisets"):printf("unequal multiset");

    return 0;
}