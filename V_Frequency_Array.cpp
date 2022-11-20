#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
   // cin>>t;

    while(t--) 
    {
      ll a,b,d;
      cin>>a>>b;
     vector<ll> v(b+1,0);
      for(ll i=0;i<a;i++)
      {
        
         cin>>d;
         v[d]+=1; 
      }
       for(int i=1;i<=b;i++)
           cout<<v[i]<<"\n";
    }
}
