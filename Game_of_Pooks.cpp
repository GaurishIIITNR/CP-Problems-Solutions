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
        if (n == 1)
            cout << 1 << "\n";
        else if (n == 2)
            cout << 1 << "\n";
        else if (n == 3)
            cout << 2 << "\n";
        else
            cout << n << "\n";
    }
}