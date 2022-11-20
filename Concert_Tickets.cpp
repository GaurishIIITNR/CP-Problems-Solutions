// HHM
#include <bits/stdc++.h>
#include <map>
using namespace std;

#define ll long long int

int main()
{
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        mp[d]++;
    }
    while (k--)
    {
        ll d;
        cin >> d;
        long long int low = 0, high = mp.size() - 1;
        while (low < high)
        {
            long long int mid = low + (high - low + 1) / 2;
            auto midit = mp.begin();
            advance(midit, mid);
            if (midit->first <= d)
                low = mid;
            else
                high = mid - 1;
        }
        long long int mid = low + (high - low + 1) / 2;
        auto midit = mp.begin();
        advance(midit, mid);
        if (midit->first <= d)
        {
            cout << midit->first << "\n";
            (midit->second)--;
            if ((midit->second) == 0)
            
        }
        else
            cout << -1 << "\n";
    }
}