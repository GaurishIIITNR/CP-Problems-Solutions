#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll cnt=0;
    while(t--) 
    {
       ll a,b;
       cin>>a>>b;
       if((b-a)>=2)
       cnt+=1;
    }
    cout<<cnt;
}
