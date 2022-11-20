#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll pwr(ll n,ll m)
 {
     ll mul=1;
     for( ll i=1;i<=m;i++)
     mul=mul*n;
     return mul;
 }
void p(ll n,ll m)
 {
     ll sm=0;
     for (int i = 0; i <=m;i=i+2)
       sm+=pwr(n,i);
       cout<<sm-1;
 }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;

    while(t--) 
    {
       ll a,b;
       cin >>a>>b;
       p(a,b);
    }
}
