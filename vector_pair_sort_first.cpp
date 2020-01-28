#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  int a1[]={10,30,20,60,40};
  int a[]={2,4,1,6,3};
  vector <pair <int,int> > v;
  int n=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<n;i++)
    v.push_back(make_pair(a[i],a1[i]));
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++)
    cout<<v[j].first<<" "<<v[j].second<<endl;
    return 0;
}
