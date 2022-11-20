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
     ll a,b,c,d;
     cin>>a>>b>>c>>d;
     if(a*b<=c*d)
     cout<<"Yes\n";
     else
     cout<<"No\n";
    }
}
