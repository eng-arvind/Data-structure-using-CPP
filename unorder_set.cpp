#include<bits/stdc++.h>
using namespace std;
int main()
{

 unordered_set<int> str;
str.insert(20);
str.insert(30);
str.insert(90);
str.insert(50);
str.insert(25);
unordered_set<int>::iterator itr;
for(itr=str.begin();itr!=str.end();itr++)
{
  cout<<*itr<<endl;
}
return 0;
}
