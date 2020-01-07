#include<iostream>
using namespace std;
void selction_sort(int a[],int n)
{
 for(int i=0;i<n-1;i++)
 {
   int min=a[i],k=i;
   for(int j=i+1;j<n;j++)
   {
     if(min>a[j])
     {
      min=a[j];
      k=j;
     }
   }
   if(k!=i)
   {
   int temp=a[i];
   a[i]=a[k];
   a[k]=temp;
    }
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
  selction_sort(a,n);
  return 0;
}
