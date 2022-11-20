#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void tp(ll a,ll b)
{
    if(a>=b)
    cout<<a-b;
    else
     cout<<0;
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
     cin>>a>>b;
     tp(a,b);
    }
}
