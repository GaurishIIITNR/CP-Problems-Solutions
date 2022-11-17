#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll z = 0, o = 0;
        for (ll i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            v.push_back(d);
            if (d == 0)
                z++;
            else
                o++;
        }
        if (z > o)
        {
            cout << o << "\n";
            continue;
        }
        else
        {
            ll res = 0;
            res += z;
            o -= z;
            res += o / 3;
            cout << res << "\n";
        }
    }
}