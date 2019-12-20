#include<bits/stdc++.h>
using namespace std;
int main()
{
  set <int> s;
s.insert(10);
s.insert(40);
s.insert(20);
s.insert(40);
s.insert(200);
s.insert(80);
s.erase(s.begin());
s.erase(40);
s.erase(s.begin(),s.find(80));
set<int>::iterator itr;
for(itr=s.begin();itr!=s.end();itr++)
{
  cout<<*itr<<endl;
}
s.clear();
return 0;
}
