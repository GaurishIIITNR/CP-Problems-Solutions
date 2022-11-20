#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll bs(vector<ll> &v, ll d, ll a, ll b)
{
    ll low = a;
    ll high = b;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (v[mid] == d)
            return mid;
        if (v[mid] < d)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;

    while (t--)
    {
       ll a,b;
       cin>>a>>b;
       vector<ll> v(a);
       for (ll i = 0; i < a; i++)
       {
           cin>>v[i];
       }
        sort(v.begin() , v.end());
       for (ll i = 0; i <b; i++)
       {  
           ll d;
           cin>>d;
           if(bs(v,d,0,a-1)==-1)
           cout<<"not found\n";
           else
           cout<<"found\n";
       }
       
    }
}
