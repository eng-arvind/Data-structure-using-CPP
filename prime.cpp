#include<iostream>
using namespace std;
bool isprime(int k)
{
  for(int j=2;j<k/2+1;j++)
    if (k%j==0)
        return false;
    else
    return true;
}
int main()
{
  int n;
  cin>>n;
  if(isprime(n))
  cout<<"True";
  else
  cout<<"False";
  return 0;
}
