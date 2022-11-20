#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll arr[t+1];
    arr[0]=0;
    for(ll i=1;i<=t;i++)
    {
        ll a;
        cin>>a;
        arr[a]=i;
    }
    for(ll i=1;i<=t;i++)
      cout<<arr[i]<<" ";
}
