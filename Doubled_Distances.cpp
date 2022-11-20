// Created by Mahadev_devote
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        bool flag = 0;
        for (ll i = 1; i < n - 1; i++)
        {
            if ((v[i] - v[i - 1]) != 2 * (v[i + 1] - v[i]) && 2 * (v[i] - v[i - 1]) != (v[i + 1] - v[i]))
            {
                cout << "No\n";
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << "Yes\n";
    }
}