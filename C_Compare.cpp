#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   //cin>>t;

    while(t--) 
    {
       string a,b;
       cin>>a>>b;
      ll l1=a.length();
      ll l2=b.length();
      ll l=min(l1,l2);
      ll flag=1;
      for(int i=0;i<l;i++)
        {
          if(a[i]>b[i])
          {
              flag=2;
              cout<<b<<"\n";
              break;
          }
          
          else if(a[i]<b[i])
          {
             flag=2;
              cout<<a<<"\n";
              break; 
          }
        }
        if(flag==1)
        {
            if(l1>l2)
             cout<<b<<"\n";
             else
              cout<<a<<"\n";
        }

    }
}
