#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxv(vector<ll> &v, ll i, ll j)
{

    ll maxv = INT_MIN;
    ll index;
    for (int k = i; k <= j; k++)
      {
           if(maxv<v[k])
        {
            maxv=v[k];
            index=k;
        }
      } 

    return index;
}
ll minv(vector<ll> &v, ll i, ll j)
{

    ll minv = INT_MAX;
    ll index;
    for ( int k = i; k <= j; k++)
    {
        if(minv>v[k])
        {
            minv=v[k];
            index=k;
        }
        
    }
    return index;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin>>t;

    while (t--)
    {
        ll a;
        cin >> a;
        vector<ll> v(a);
        for (int i = 0; i < a; i++)
            cin >> v[i];
        ll b = maxv(v, 0, a - 1);
        ll c = minv(v, 0, a - 1);
        ll x=v[c];
        v[c]=v[b];
        v[b]=x;
        for (int i = 0; i < a; i++)
            cout << v[i]<<" ";
    }
}
