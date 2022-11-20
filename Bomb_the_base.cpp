// Created by LALU PRASAD YADAV
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
        ll n, s;
        cin >> n >> s;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            v.push_back(d);
        }
        bool m = 1;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v[i] < s)
            {
                cout << i + 1 << "\n";
                m = 0;
                break;
            }
        }
        if (m)
            cout << 0 << "\n";
    }
}