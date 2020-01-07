#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
   int current=a[i],j=i;
   while(a[j-1]>current && j>0)
   {
     a[j]=a[j-1];
     j--;
   }
   a[j]=current;
 }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
int main()
{
  int n;
  cout<<"Enter size of Array:";
  cin>>n;
  int a[n];
  cout<<"Enter the element of Array:\n";
  for(int i=0;i<n;i++)
  cin>>a[i];
  insertion_sort(a,n);
  return 0;
}
