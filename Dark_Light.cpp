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
        if (b == 1 && a % 4 == 0)
            cout << "On"
                 << "\n";
        else if (b == 1)
            cout << "Ambiguous\n";
        else
        {
            if (a % 4 == 0)
                cout << "Off\n";
            else
                cout << "On"
                     << "\n";
        }
    }
}