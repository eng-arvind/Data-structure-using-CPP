#include<iostream>
using namespace std;
int main()
{
  double n;
  cin>>n;
  double sum=200;
  double v_fraction=sum/n;
  cout.precision(12);
  cout<<fixed<<v_fraction<<endl;
  return 0;
}
