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

        ll a, b, c;
        cin >> a >> b >> c;
        if (a == 0)
            cout << b << "\n";
        else if (b % (a + c - 1) >= c)
            cout << 0 << "\n";
        else
            cout << b % (a + c - 1) << "\n";
    }
}