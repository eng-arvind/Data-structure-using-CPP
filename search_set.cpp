#include<bits/stdc++.h>
using namespace std;
int main()
{
  int v;
  set <int> s;
s.insert(10);
s.insert(40);
s.insert(20);
s.insert(40);
s.insert(200);
s.insert(80);
set<int>::iterator itr;
for(itr=s.begin();itr!=s.end();itr++)
{
  cout<<*itr<<endl;
}
cout<<"Enter element you want to search\n";
cin>>v;
if(s.find(v)==s.end())
cout<<"Not found";
else
cout<<"found";
return 0;
}
