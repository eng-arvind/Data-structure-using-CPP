#include<iostream>
using namespace std;
int partition(int a[],int p,int q)
{
  int pivot=a[q];
  int i=p-1;
  for(int j=p;j<=q;j++)
  {
    if(a[j]<=pivot)
    {
      i++;
      int temp=a[j];
      a[j]=a[i];
      a[i]=temp;
    }
  }
  return i;
}
void quick_sort(int a[],int l,int h)
{
  if(l<h)
  {
    int r=partition(a,l,h);
    quick_sort(a,l,r-1);
    quick_sort(a,r+1,h);
  }
}
int main()
{
  int n;
  cout<<"Enter the size of array:";
  cin>>n;
  int a[n];
  cout<<"Enter the element of array:";
  for(int i=0;i<n;i++)
  cin>>a[i];
  quick_sort(a,0,n-1);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
  return 0;
}
