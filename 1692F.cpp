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
            mp[d % 10]++;
        }
        vector<ll> v;
        for (auto x : mp)
        {
            if (x.second > 3)
            {
                for (ll i = 0; i < 3; i++)
                    v.push_back(x.first);
            }
            else
            {
                for (ll i = 0; i < x.second; i++)
                    v.push_back(x.first);
            }
        }
        bool f = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (ll j = i + 1; j < v.size(); j++)
            {
                for (ll k = j + 1; k < v.size(); k++)
                {
                    if ((v[i] + v[j] + v[k]) % 10 == 3)
                    {
                        cout << "YES\n";
                        f = 1;
                        break;
                    }
                }
                if (f)
                    break;
            }
            if (f)
                break;
        }
        if (!f)
            cout << "NO\n";
    }
}