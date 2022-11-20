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
        vector<ll>v(3);
       ll a,b,c;
       cin>>a>>b>>c;
       v[0]=a;v[1]=b;v[2]=c;
       sort(v.begin(),v.end());
       cout<<(v[2]-v[1])+(v[1]-v[0])<<"\n";
    }
}
