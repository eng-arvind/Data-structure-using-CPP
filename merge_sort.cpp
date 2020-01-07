#include<iostream>
using namespace std;
void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int a[],int l,int r)
{
  int mid;
  if(l<r)
  {
  mid=(l+r)/2;
  merge_sort(a,l,mid);
  merge_sort(a,mid+1,r);
  merge(a,l,mid,r);
   }
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
  merge_sort(a,0,n-1);
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
  return 0;
}
