#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[1000000],b[1000000],i,m;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>a[i];

  }
  for(i=0;i<n;i++)
  {
      b[i]=a[i];

  }

  sort(a,a+n);
  for(i=0;i<n;i++)
  {
      if(b[i]==a[2])
      {
          cout<<i+1;
      }
  }
}
