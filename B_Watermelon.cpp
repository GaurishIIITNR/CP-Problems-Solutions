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
       if(a%2!=0 || a==2)
       cout<<"NO\n";
       else
       cout<<"YES\n";
    }
}
