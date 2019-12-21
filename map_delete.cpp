#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{
  map<int,int> map1;
  map1.insert(pair<int,int>(1,30));
  map1.insert(pair<int,int>(4,40));
  map1.insert(pair<int,int>(3,70));
  map1.insert(pair<int,int>(1,70));
  map1.insert(pair<int,int>(5,60));
  map1.insert(pair<int,int>(2,80));
  map1.insert(pair<int,int>(3,10));
  map1.erase(30);
  map1.erase(map1.begin(),map1.find(4));
  map<int,int>::iterator itr;
  cout<<"\n the map is:\n";
  cout<<"\tkey\tElement \n";
  for(itr=map1.begin();itr!=map1.end();++itr)
  cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';
  cout<<endl;
  return 0;
}
