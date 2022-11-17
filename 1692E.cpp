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
        ll n, k;
        cin >> n >> k;
        ll sm = 0;
        map<ll, ll> mp1, mp2;
        vector<ll> v(n);
        ll low = -1, high = n;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sm += v[i];
            if (v[i] == 1)
            {
                cnt++;
                mp1[cnt] = i - low;
            }
        }
        cnt = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                cnt++;
                mp2[cnt] = high - i;
            }
        }
        if (k > sm)
            cout << -1 << "\n";
        else if (k == sm)
            cout << 0 << "\n";
        // for (auto x : mp1)
        //     cout << x.first << " " << x.second<<"****\n";
        // for (auto x : mp2)
        //     cout << x.first << " " << x.second<<"\n";
        // cout << endl;

        else
        {
            ll mn = INT_MAX;
            k = sm - k;
            for (auto x : mp1)
            {
                if (x.first < k)
                    mn = min(mn, mp1[x.first] + mp2[k - x.first]);
                // cout<< mp1[x.first] <<" "<< mp2[k - x.first]<<"\n";
            }
            mn = min(mn, mp2[k]);
            mn = min(mn, mp1[k]);
            cout << mn << "\n";
        }
    }
}