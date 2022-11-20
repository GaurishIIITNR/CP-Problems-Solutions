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
        n = n + 2;
        if (n % 3 == 0)
            cout << "HUGE\n";
        else if (n % 3 == 1)
            cout << "SMALL\n";
        else
            cout << "NORMAL\n";
    }
}