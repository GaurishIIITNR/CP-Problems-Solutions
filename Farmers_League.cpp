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
        ll a = (n - 1) * 3;
        ll b = (ll)(ceil((n - 2) / 2.0) * 3);
        cout << a - b << "\n";
    }
}