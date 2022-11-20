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
        ll k;
        ll n;
        cin >> n >> k;
        ll sm = 0;
        for (ll i = 0; i < n; i++)
        {
            ll d;
            cin >> d;
            sm += d;
        }
        if (sm > k)
            cout << sm - k << "\n";
        else
            cout << 0 << "\n";
    }
}