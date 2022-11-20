// Created by Mahadev_devote
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll res = 0;
        ll cn2 = 0;
        ll cnt = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll d;
            cin >> d;
            v.push_back(d);
            if (d == 1)
            {
                res += n - i;
                cnt++;
            }
            if (d == 2)
                cn2++;
        }
        for (auto x : v)
        {
            if (x == 1)
                cnt--;
            else
                res += cnt;
        }
        if (cn2 <= 1)
            cn2 = 0;
        else
            cn2 = ((cn2 - 1) * cn2) / 2;
        cout << res + cn2 << "\n";
    }
}