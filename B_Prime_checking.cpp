
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
      ll a;
      cin>>a;
      ll flag=1;
      for(ll i=2;i<=sqrt(a);i++)
      {
          if(a%i==0)
          {
              flag=2;
              cout<<"NO\n";
              break;
          }
      }
      if(flag==1 && a!=1)
      cout<<"YES\n";
      else if(a==1)
       cout<<"NO\n";
    }
}
