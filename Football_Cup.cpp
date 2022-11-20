// Created by Mohit Kulhari
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y && x > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// If you are bad I am your Dad.