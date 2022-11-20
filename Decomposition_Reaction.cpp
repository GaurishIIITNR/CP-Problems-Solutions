// Created by LALU PRASAD YADAV
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //   ll tc;  cin>>tc;
    //   while(tc--)
    {
        ll mod = 1000000007;
        ll n, ne;
        cin >> n >> ne;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        while (ne--)
        {
            ll cn, np;
            cin >> cn >> np;
            while (np--)
            {
                ll d1, d2;
                cin >> d1 >> d2;
                v[d2 - 1] = ((v[d2 - 1] % mod) + ((d1 % mod) * (v[cn - 1] % mod) % mod)) % mod;
            }
            v[cn - 1] = 0;
        }
        for (ll i = 0; i < n; i++)
            cout << v[i] << "\n";
    }
}