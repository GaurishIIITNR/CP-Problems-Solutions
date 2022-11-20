// Created by Mahadev_devote
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        for (ll i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                cnt++;
            }
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                cnt++;
            }
        }
        if (cnt > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}