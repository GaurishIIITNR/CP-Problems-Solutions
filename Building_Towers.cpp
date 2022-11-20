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
       ll a,b;
       cin>>a>>b;
       ll c=((ll)ceil(log2(a))+1);
       if(c<=b)
       cout<<(b-c+1)<<"\n";
       else 
       cout<<0<<"\n";

    }
}
