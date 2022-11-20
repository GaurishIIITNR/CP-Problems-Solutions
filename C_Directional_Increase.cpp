// HHM //
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
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i != 0)
                v[i]++;
        }
        for (ll i = v.size() - 1; i > 1; i--)
        {
            if (v[i] == 1)
                continue;
            else
            {
                ll tmp = i;
                break;
            }
        }
        bool f = 0;
        for (ll i = v.size() - 1; i > 1; i--)
        {
            if (v[i] > 1)
            {
                f = 1;
            }
            v[i - 1] -= abs(v[i]);
        }
        if (v[0] >= 0 && v[1] <= 0 && v[0] + v[1] == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}