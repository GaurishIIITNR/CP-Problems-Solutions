// Created by LALU PRASAD YADAV
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
        if (n % 5)
            cout << -1 << "\n";
        else
        {
            if (n % 10 == 0)
                cout << n / 10 << "\n";
            else
                cout << (n / 10) + 1 << "\n";
        }
    }
}