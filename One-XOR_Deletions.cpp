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
        ll n1 = n;
        map<ll, ll> mp;
        while (n--)
        {
            ll d;
            cin >> d;
            mp[d]++;
            if (d % 2)
                mp[d - 1]++;
            else
                mp[d + 1]++;
        }
        ll mx = 0;
        for (auto x : mp)
            mx = max(mx, x.second);
        cout << n1 - mx << "\n";
    }
}