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
        string s, s1;
        cin >> n >> s >> s1;
        vector<ll> v(26, 0), v1(26, 0);
        for (auto x : s)
            v[x - 'a']++;
        for (auto x : s1)
            v1[x - 'a']++;
        ll sm = 0, mx = 0;
        for (ll i = 0; i < 26; i++)
        {
            v[i] = max(v[i], v1[i]);
            sm += v[i];
            mx = max(mx, v[i]);
        }
        if (mx == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        if ((mx * 2) < sm)
        {
            cout << 1 << "\n";
            continue;
        }
        cout << sm - ((sm - mx) * 2) << "\n";
    }
}