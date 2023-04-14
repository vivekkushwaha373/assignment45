#include<bits/stdc++.h>
using namespace std;
int main()
{
   multiset<int>s;
   s.insert(1);
   s.insert(4);
   s.insert(5);
   s.insert(9);
   auto i=s.end();
   i--;
   cout<<*i;
    return 0;
}