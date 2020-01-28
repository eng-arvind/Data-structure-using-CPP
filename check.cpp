#include<iostream>
using namespace std;
int fun(int n)
{
  if(n)
  {
    fun(n-1);
    cout<<n<<" ";
    fun(n-1);
    fun(n-1);
  }
}
int main()
{
  int n;
  cin>>n;
  fun(n);
}
