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
        ll a, b;
        cin >> a >> b;
        ll tm = 0, sm = 0;
        ll a1 = a;
        while (a1--)
        {
            ll d;
            cin >> d;
            sm += d;
        }
        if (sm >= b)
            cout << a << "\n";
        else
            cout << floor((float)b / sm) * a << "\n";
    }
}