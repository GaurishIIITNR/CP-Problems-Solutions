#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tests;
    cin >> tests;
    while (tests--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, bool> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }
        sort(v.begin(), v.end());
        ll sm = 0;
        bool flag = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            sm += v[i] + v[i + 1] + v[i + 2];
            if (mp[sm] == 0)
            {
                cout << "NO\n";
                flag = 1;
                break;
            }
            sm = 0;
        }
        if (!flag)
            cout << "YES\n";
    }
}