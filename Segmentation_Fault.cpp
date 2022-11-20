// HHM
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
vector<vector<ll>> solve(vector<vector<ll>> &inter)
{
    vector<vector<ll>> v;
    sort(inter.begin(), inter.end());
    ll n = inter.size();
    v.push_back(inter[0]);

    for (ll i = 1; i < n; i++)
    {
        if (v[v.size() - 1][1] >= inter[i][0])
        {
            v[v.size() - 1][1] = max(v[v.size() - 1][1], inter[i][1]);
        }
        else
        {
            v.push_back(inter[i]);
        }
    }
    return v;
}
int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        ll k;
        cin >> k;
        vector<vector<ll>> v;
        map<ll, bool> mp;
        for (ll i = 0; i < k; i++)
        {
            vector<ll> z;
            ll a, b;
            cin >> a >> b;
            z.push_back(a);
            z.push_back(b);
            v.push_back(z);
            if (i + 1 >= a && i + 1 <= b)
                mp[i + 1] = 1;
        }

        vector<vector<ll>> r = solve(v);
        vector<ll> p;
        for (auto x : r)
        {
            for (ll i = x[0]; i <= x[1]; i++)
            {
                if (mp[i] != 1)
                    p.push_back(i);
            }
            // cout<<x[0]<<" "<<x[1]<<"\n";
        }
        cout << p.size() << "\n";
        for (auto x : p)
            cout << x << "\n";
        cout << "\n";
    }
}