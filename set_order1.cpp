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
cout<<"size="<<s.size()<<endl;
cout<<"max size="<<s.max_size()<<endl;
set<int>::iterator itr;
for(itr=s.begin();itr!=s.end();itr++)
{
  cout<<*itr<<endl;
}
if(s.empty())
cout<<"set is empty";
else
cout<<"set is not empty";
return 0;
}
