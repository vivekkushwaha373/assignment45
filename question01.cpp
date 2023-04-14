#include<bits/stdc++.h>
using namespace std;
int main()
{
   multiset<int>s;
   s.insert(1);
   s.insert(10);
   s.insert(2);
   s.insert(20);
   s.insert(1);
   for(auto i=s.begin();i!=s.end();i++)
   cout<<*i<<" ";
   cout<<endl;
   cout<<*(s.begin());//O(1)

    return 0;
}