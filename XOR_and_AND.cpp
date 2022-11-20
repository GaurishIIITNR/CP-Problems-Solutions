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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll cnt = 0;
        for (ll j = 0; j < n; j++)
            for (ll i = j + 1; i < n; i++)
            {
                if ((v[i] ^ v[j]) < (v[i] & v[j]))
                    cnt++;
            }
        cout << cnt << "\n";
    }
}