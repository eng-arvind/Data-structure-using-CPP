#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
void bucket_sort(float a[],int n)
{
  vector<float> bucket[n];
  for(int i=0;i<n;i++)
  {
    int index=n*a[i];
    bucket[index].push_back(a[i]);
  }
    for(int i=0;i<n;i++)
    sort(bucket[i].begin(),bucket[i].end());
    int k=0;
  for(int i=0;i<n;i++)
  for(int j=0;j<bucket[i].size();j++)
  a[k++]=bucket[i][j];
}
int main()
{
  int n;
  cout<<"Enter size of Array:";
  cin>>n;
  float a[n];
  cout<<"Enter the element of Array:\n";
  for(int i=0;i<n;i++)
  cin>>a[i];
  bucket_sort(a,n);
  cout << "Sorted array is \n";
  for (int i=0; i<n; i++)
  cout << a[i] << " "; 
  return 0;
}
