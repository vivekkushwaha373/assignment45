#include<bits/stdc++.h>
using namespace std;
int main()
{
   multiset<int>s;
   s.insert(1);
   s.insert(4);
   s.insert(5);
   s.insert(9);
  for(auto i=s.begin();i!=s.end();i++)
  cout<<*i<<" ";
  cout<<endl;
  s.erase(1);
  for(auto i=s.begin();i!=s.end();i++)
  cout<<*i<<" ";
    return 0;
}