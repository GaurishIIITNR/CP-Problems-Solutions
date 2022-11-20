#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
   
ll t=1;

cin>>t;
while(t--)
{
    ll n,a;
    cin>>n>>a;
    map<ll,ll>mp;
    mp[1]=n;
    ll j=n-1;
    for(ll i=2;i<=n;i++)
    {
        mp[i]=pow(2,j)-1;
        j--;
    }
    ll sm=0;
     for(auto x:mp)
     {
         if(x.second<=a)
         {
             sm+=(x.second)*(x.first);
             a-=x.second;
         }
         else
         {
             sm+=(x.first)*a;
             break;
         }
     }
     cout<<sm<<"\n";
    // cout<<x.first<<" "<<x.second<<"\n";
}
	return 0;
}
