#include <bits/stdc++.h>
#define ll long long int
using namespace std;

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
        for (ll i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < a; i++)
        {
            if (v[i] == 0)
            {
                reverse(v.begin(), v.begin() + i);
            }
        }
        for (ll i = 0; i < a; i++)
            cout << v[i] << " ";
    }
}
