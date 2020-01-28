#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
void find_duplicate(int arr[],int n)
{
  unordered_set<int> intset;
  unordered_set<int> duplicate;
  for(int i=0;i<n;i++)
  {
    if(intset.find(arr[i])==intset.end())
    intset.insert(arr[i]);
    else
    duplicate.insert(arr[i]);
  }
  cout<<"Duplicate element\n";
  unordered_set<int>::iterator itr;
  for(itr=duplicate.begin();itr!=duplicate.end();itr++)
  {
    cout<<*itr<<" ";
  }
}
int main()
{
  int arr[]={1,5,2,1,4,3,1,7,2,8,,5};
  int n=sizeof(arr)/sizeof(int);
  find_duplicate(arr,n);
  return 0;
}
