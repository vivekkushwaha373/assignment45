#include<bits/stdc++.h>
using namespace std;
int main()
{
   multiset<int>s;
   s.insert(1);
   s.insert(4);
   s.insert(5);
   s.insert(9);
   cout<<s.size()<<endl;
   s.clear();
   cout<<s.size()<<endl;
    return 0;
}