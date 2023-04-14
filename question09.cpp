#include<bits/stdc++.h>
using namespace std;
int main()
{
   multiset<int>s;
   s.insert(1);
   s.insert(1);
   s.insert(4);
   s.insert(4);
   s.insert(9);
   s.insert(17);
   int count=0;
    for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
  set<int>x(s.begin(),s.end());
  for(auto j=x.begin();j!=x.end();j++)
  {
  for(auto i=s.begin();i!=s.end();i++)
  {
    if((*i)==(*j))
    count++;
  }
//   cout<<count<<" ";
  if(count==1)
  count=0;
  else
  {
  s.erase(*j);
  s.insert(*j);
  count=0;
  }
  }
  for(auto i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    return 0;
}