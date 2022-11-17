#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  int z=0;
  cin>>t;
  while(t--)
  {
    int n,c;
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
       cin>>a[i];
       sort(a,a+n,greater<int>());
        
      c=a[0]-a[n-1];
       
         cout<<c<<endl;
       
       
  }

   
}