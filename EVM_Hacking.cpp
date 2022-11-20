#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;

    while(t--) 
    {
    ll a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
    ll d=max((p-a),(q-b));
    ll e=max(d,(r-c));
    if((a+b+c+e)>((p+q+r)/2))
    cout<<"YES\n";
    else
    cout<<"NO\n";
    }
}
