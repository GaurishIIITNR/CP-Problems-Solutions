#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void pwr(ll n,ll m)
 {
    cout<<n<<" "<<m;
 }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;

    while(t--) 
    {
     ll a;
     cin >>a;
     vector<ll> v(a);
    ll mn=INT_MAX;
     ll mx=INT_MIN;
     for(ll i=0; i<a; i++)
      {   cin>>v[i];
          if(mx<v[i])
          mx=v[i];
          if(mn>v[i])
          mn=v[i];
         
      }
      pwr(mn,mx);
    }
}
