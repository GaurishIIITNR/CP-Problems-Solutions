// HHM
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
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            mp[d]++;
        }
        ll cnt = 0, mn = INT_MAX, mx = 0;
        for (auto x : mp)
        {
            mx += x.second - 1;
        }
        // if(mn==INT_MAX)mn=0;
        if (mx % 2)
            cout << n - mx - 1 << "\n";
        else
            cout << n - mx << "\n";
    }
}