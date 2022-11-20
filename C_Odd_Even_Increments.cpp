#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void gaurish()
{
    ll i, j, k;
    ll n;
    cin >> n;
    ll odd, even;
    bool y = 0, z = 0;
    cin >> odd >> even;
    if (odd % 2)
        y = 1;
    if (even % 2)
        z = 1;
    ll cnt = 0;
    for (ll i = 3; i < n + 1; i++)
    {
        ll d;
        cin >> d;
        bool ch = d % 2;
        if (i % 2)
        {
            if (y != ch)
                cnt++;
        }
        else
        {
            if (z != ch)
                cnt++;
        }
    }
    if (cnt > 0)
        cout << "NO\n";
    else
        cout << "YES\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    cin >> t;

    while (t--)
    {
        gaurish();
    }
}
